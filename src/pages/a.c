
#include <stdio.h>
#include "../../dependencies/c2wasm.c"
#include "../../dependencies/react.c"
#include "../redirects.c"
c2wasm_js_var create_style_a() {
    return ReactCreateProps(
        "style", ReactCreateProps(
                "color", ReactCreateString("red")
        )
        );
}

ReactComponent create_page_a() {
    return ReactCreateElement(
            "div", 
            ReactNULL,
            ReactCreateElement(
                "h1", 
                create_style_a(),
                ReactCreateString("#333")
            )
    );
}