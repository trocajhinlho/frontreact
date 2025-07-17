//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../imports/imports.globals.h"
//silver_chain_scope_end

void render_root(){
  char current_page[100] = {0};
  int size  = c2wasm_get_object_string_len_prop(c2wasm_window, "current_page");
  c2wams_object_memcpy_string(c2wasm_window,"current_page",0,current_page, size);
  ReactComponent app;
  if(strcmp(current_page,"index")== 0){
    app = create_index_page();
  } 
  if(strcmp(current_page,"a")== 0){
    app = create_page_a();
  }
  if(strcmp(current_page,"login_form")== 0){
    app = create_login_form();
  }
  first_render = false;
  ReactRootRender(root, app);
}
