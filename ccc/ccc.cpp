#include <memory>

#include "grpc++/grpc++.h"
#include "../empty/calculator.grpc.pb.h"
#include "stdafx.h"
class Client
{
public:
	Client(std::shared_ptr<grpc::Channel> channel)
		: stub_(calc::Caltulator::NewStub(channel)) {}

	google::protobuf::int32 Add(google::protobuf::int32 a, google::protobuf::int32 b)
	{
		calc::Request request;
		request.set_a(a);
		request.set_b(b);

		calc::Response response;

		grpc::ClientContext context;

		grpc::Status status = stub_->Add(&context, request, &response);

		if (status.ok())
		{
			return response.sum();
		}
		else
		{
			return -1;
		}
	}

private:
	std::unique_ptr<calc::Caltulator::Stub> stub_;
};

int main()
{
	grpc_init();
	Client client(grpc::CreateChannel(
		"localhost:50051", grpc::InsecureChannelCredentials()));

	auto result = client.Add(1, 2);
	std::cout << "1 + 2 = " << result << std::endl;

	return 0;
}