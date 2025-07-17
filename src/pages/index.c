#include <stdio.h>
#include "../../dependencies/c2wasm.c"
#include "../../dependencies/react.c"
#include "../redirects.c"

// Componente principal
ReactComponent create_index_page() {
  return ReactCreateElement(
    "div", 
    ReactCreateProps(
      "className", ReactCreateString("container"),
      "style", ReactCreateProps(
        "padding", ReactCreateString("20px"),
        "maxWidth", ReactCreateString("800px"),
        "margin", ReactCreateString("0 auto")
      )
    ),
    ReactCreateElement("h1", 
      ReactCreateProps(
        "style", ReactCreateProps(
          "color", ReactCreateString("#333"),
          "borderBottom", ReactCreateString("2px solid #eee"),
          "paddingBottom", ReactCreateString("10px")
        )
      ), 
      ReactCreateString("Welcome to C-React")
    ),
    ReactCreateFragment(
      ReactCreateElement("p", ReactNULL, 
        ReactCreateString("Esta página é renderizada usando React em C!")
      ),
      ReactCreateElement(
        "button",
        ReactCreateProps(
        
          "onClick", redirect_to_a,
          "className", ReactCreateString("btn btn-primary"),
          "style", ReactCreateProps(
            "padding", ReactCreateString("10px 15px"),
            "backgroundColor", ReactCreateString("#c00"),
            "color", ReactCreateString("white"),
            "border", ReactCreateString("none"),
            "borderRadius", ReactCreateString("4px"),
            "cursor", ReactCreateString("pointer"),
            "fontSize", ReactCreateString("16px"),
            "marginTop", ReactCreateString("15px")
          )
        ),
        ReactCreateString("Ir para Página Vermelha")
      )
    )
  );
}
