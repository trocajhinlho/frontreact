#include "../../dependencies/c2wasm.c"
#include "../../dependencies/react.c"
#include "../redirects.c"

void render_root();

int numero = 0;
c2wasm_js_var increementar(c2wasm_js_var args) {
    numero++;
    render_root();
    return c2wasm_undefined;
}

c2wasm_js_var create_style_do_numero() {
    return ReactCreateProps(
        "style", ReactCreateProps(
            "color", ReactCreateString("red")
        )
    );
}

c2wasm_js_var create_a_numero() {
    char numero_formatado [10] ={0};
    sprintf(numero_formatado, "%d", numero);
    return ReactCreateElement(
                "h1", 
                create_style_do_numero(),
                ReactCreateString(numero_formatado)
    );
}

ReactComponent create_page_a() {
    return ReactCreateElement(
            "div", 
            ReactNULL,
            ReactCreateElement(
                "button",
                ReactCreateProps(
                    "onClick", ReactCreateClojure(increementar)
                ),
                ReactCreateString("incrementar")
            ),
            create_a_numero(),
            create_a_numero()
    );
}