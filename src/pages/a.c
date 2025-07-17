
#include <stdio.h>
#include "../../dependencies/c2wasm.c"
#include "../../dependencies/react.c"
#include "../redirects.c"

ReactComponent create_page_a() {
    return ReactCreateElement(
            "div", 
            ReactNULL,
            ReactCreateString("Entrou na págia a")
    );
}