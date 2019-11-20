#include "./win32/pidToFront.h"


NAN_MODULE_INIT(InitAll) {
  #define NAN_SET(name, method) Nan::Set(target, Nan::New<v8::String>(name).ToLocalChecked(), Nan::GetFunction(Nan::New<v8::FunctionTemplate>(method)).ToLocalChecked());
    
    NAN_SET("pidToFront", win32js::toFront);
}

NODE_MODULE(win32js, InitAll);