/* File generated automatically by the QuickJS-ng compiler. */

#include "quickjs-libc.h"

const uint32_t qjsc_hello_size = 103;

const uint8_t qjsc_hello[103] = {
 0x12, 0x04, 0x01, 0x22, 0x65, 0x78, 0x61, 0x6d,
 0x70, 0x6c, 0x65, 0x73, 0x2f, 0x68, 0x65, 0x6c,
 0x6c, 0x6f, 0x2e, 0x6a, 0x73, 0x01, 0x0e, 0x63,
 0x6f, 0x6e, 0x73, 0x6f, 0x6c, 0x65, 0x01, 0x06,
 0x6c, 0x6f, 0x67, 0x01, 0x16, 0x48, 0x65, 0x6c,
 0x6c, 0x6f, 0x20, 0x57, 0x6f, 0x72, 0x6c, 0x64,
 0x0d, 0xbe, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x0c, 0x20, 0xfa, 0x01, 0xa2, 0x01, 0x00, 0x00,
 0x00, 0x03, 0x00, 0x00, 0x19, 0x00, 0x08, 0xea,
 0x02, 0x29, 0x38, 0xe0, 0x00, 0x00, 0x00, 0x42,
 0xe1, 0x00, 0x00, 0x00, 0x04, 0xe2, 0x00, 0x00,
 0x00, 0x24, 0x01, 0x00, 0x0e, 0x06, 0x2e, 0xbe,
 0x03, 0x01, 0x01, 0x02, 0x48, 0x0e, 0x00,
};

static JSContext *JS_NewCustomContext(JSRuntime *rt)
{
  JSContext *ctx = JS_NewContext(rt);
  if (!ctx)
    return NULL;
  return ctx;
}

int main(int argc, char **argv)
{
  JSRuntime *rt;
  JSContext *ctx;
  rt = JS_NewRuntime();
  js_std_set_worker_new_context_func(JS_NewCustomContext);
  js_std_init_handlers(rt);
  JS_SetModuleLoaderFunc(rt, NULL, js_module_loader, NULL);
  ctx = JS_NewCustomContext(rt);
  js_std_add_helpers(ctx, argc, argv);
  js_std_eval_binary(ctx, qjsc_hello, qjsc_hello_size, 0);
  js_std_loop(ctx);
  JS_FreeContext(ctx);
  js_std_free_handlers(rt);
  JS_FreeRuntime(rt);
  return 0;
}
