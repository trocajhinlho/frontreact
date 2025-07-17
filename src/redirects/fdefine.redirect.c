//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../imports/imports.globals.h"
//silver_chain_scope_end

// Handler para redirecionamento
c2wasm_js_var redirect_to_a(c2wasm_js_var args) {
  // window.location = "other.html";
  c2wasm_set_object_prop_string(c2wasm_window, "location", "a.html");
  return c2wasm_null;
}
