#ifndef __REDIRECTS_C__
#define __REDIRECTS_C__

#include "../dependencies/c2wasm.c"
#include "../dependencies/react.c"


// Handler para redirecionamento
c2wasm_js_var redirect_to_a(c2wasm_js_var args) {
  // window.location = "other.html";
  c2wasm_set_object_prop_string(c2wasm_window, "location", "a.html");
  return c2wasm_null;
}
#endif