
#include <stdio.h>
#include <string.h>
#include "../dependencies/c2wasm.c"
#include "../dependencies/react.c"
#include "pages/index.c"
#include "pages/a.c"


ReactRoot root;

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
  ReactRootRender(root, app);
}

int main() {
  ReactStart();
  root = ReactDOMCreateRoot(ReactGetElementById("root")); 
  render_root();
  return 0;
}