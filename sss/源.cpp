#include "../empty/calculator.grpc.pb.h"

#include "grpc++/grpc++.h"

class CalcualtorService : public calc::Caltulator::Service
{
	// ���졢����
public:

	// �ӿ�ʵ��
public:
	virtual ::grpc::Status Add(::grpc::ServerContext* context,
		const ::calc::Request* request, ::calc::Response* response) override
	{
		response->set_sum(request->a() + request->b());
		return grpc::Status::OK;
	}
};

int main()
{
	std::string server_address("0.0.0.0:50051");

	CalcualtorService service;

	grpc::ServerBuilder builder;
	builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
	builder.RegisterService(&service);

	std::unique_ptr<grpc::Server> server(builder.BuildAndStart());

	std::cout << "Server listening on " << server_address << std::endl;

	server->Wait();

	return 0;
}