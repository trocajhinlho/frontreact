#include <stdio.h>
#include "dependencies/c2wasm.c"
#include "dependencies/react.c"

// Handler para redirecionamento
c2wasm_js_var handleRedirect(c2wasm_js_var args) {
  // window.location = "other.html";
  c2wasm_set_object_prop(c2wasm_window, "location", c2wasm_create_string("other.html"));
  return c2wasm_null;
}

// Componente principal
ReactComponent createAppComponent() {
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
          "onClick", ReactCreateClojure(
            handleRedirect,
            ReactNULL
          ),
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

int main() {
  ReactStart();
  ReactComponent app = createAppComponent();
  ReactRoot root = ReactDOMCreateRoot(ReactGetElementById("root"));
  ReactRootRender(root, app);
  return 0;
}