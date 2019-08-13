#include <assert.h>
#include <string>
#include <napi.h>

#include "../../../libProject/fibonacci.cpp"

using namespace Napi;

Value Fibonacci(const CallbackInfo& info) {
  assert(info[0].IsNumber());
  unsigned int n = info[0].As<Number>().Uint32Value();
  auto result = fibonacci(n);
  return Number::New(info.Env(), result);
}

Object Init(Env env, Object exports) {
  exports.Set("fibonacci", Function::New(env, Fibonacci));
  return exports;
}
NODE_API_MODULE(addon, Init)
