// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: calculator.proto

#include "calculator.pb.h"
#include "calculator.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace calc {

static const char* Caltulator_method_names[] = {
  "/calc.Caltulator/Add",
};

std::unique_ptr< Caltulator::Stub> Caltulator::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Caltulator::Stub> stub(new Caltulator::Stub(channel));
  return stub;
}

Caltulator::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_Add_(Caltulator_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Caltulator::Stub::Add(::grpc::ClientContext* context, const ::calc::Request& request, ::calc::Response* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Add_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::calc::Response>* Caltulator::Stub::AsyncAddRaw(::grpc::ClientContext* context, const ::calc::Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::calc::Response>::Create(channel_.get(), cq, rpcmethod_Add_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::calc::Response>* Caltulator::Stub::PrepareAsyncAddRaw(::grpc::ClientContext* context, const ::calc::Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::calc::Response>::Create(channel_.get(), cq, rpcmethod_Add_, context, request, false);
}

Caltulator::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Caltulator_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Caltulator::Service, ::calc::Request, ::calc::Response>(
          std::mem_fn(&Caltulator::Service::Add), this)));
}

Caltulator::Service::~Service() {
}

::grpc::Status Caltulator::Service::Add(::grpc::ServerContext* context, const ::calc::Request* request, ::calc::Response* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace calc
