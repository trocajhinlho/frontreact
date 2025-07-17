//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../imports/imports.globals.h"
//silver_chain_scope_end


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
        
          "onClick", ReactCreateClojure(redirect_to_a),
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
