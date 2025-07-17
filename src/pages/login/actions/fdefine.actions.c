//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../../imports/imports.globals.h"
//silver_chain_scope_end

c2wasm_js_var handle_login_foccus_out(c2wasm_js_var args) {
    copy_js_input_to_c_string(login_email, "username");
    render_root();
    return c2wasm_undefined;
}

c2wasm_js_var handle_password_foccus_out(c2wasm_js_var args) {
    copy_js_input_to_c_string(login_password, "PasswordSeiLa");
    render_root();
    return c2wasm_undefined;
}