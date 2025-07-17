//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../imports/imports.globals.h"
//silver_chain_scope_end

void copy_js_input_to_c_string(char *str,const char *id){
    c2wasm_js_var args_array = c2wasm_create_array();
    c2wasm_append_array_string(args_array, id);
    c2wasm_js_var input_value = c2wasm_call_object_prop(c2wasm_document, "getElementById", args_array);
    //extract the id from input_value
    c2wams_object_memcpy_string(input_value,"value",0,str,200);

}