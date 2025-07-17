//silver_chain_scope_start
//mannaged by silver chain: https://github.com/OUIsolutions/SilverChain
#include "../../imports/imports.globals.h"
//silver_chain_scope_end


ReactComponent create_login_form() {
    // Create username input
    ReactComponent username_input = ReactCreateElement(
        "input",
        ReactCreateProps(
            "type", ReactCreateString("text"),
            "placeholder", ReactCreateString("Username"),
            "name", ReactCreateString("username"),
            "style", ReactCreateProps(
                "display", ReactCreateString("block"),
                "marginBottom", ReactCreateString("10px"),
                "width", ReactCreateString("100%"),
                "padding", ReactCreateString("8px")
            )
        ),
        ReactNULL
    );

    // Create password input
    ReactComponent password_input = ReactCreateElement(
        "input",
        ReactCreateProps(
            "type", ReactCreateString("password"),
            "placeholder", ReactCreateString("Password"),
            "name", ReactCreateString("password"),
            "style", ReactCreateProps(
                "display", ReactCreateString("block"),
                "marginBottom", ReactCreateString("10px"),
                "width", ReactCreateString("100%"),
                "padding", ReactCreateString("8px")
            )
        ),
        ReactNULL
    );

    // Create login button
    ReactComponent button = ReactCreateElement(
        "button",
        ReactCreateProps(
            "type", ReactCreateString("button"),
            "style", ReactCreateProps(
                "padding", ReactCreateString("8px 16px"),
                "backgroundColor", ReactCreateString("#0d6efd"),
                "color", ReactCreateString("white"),
                "border", ReactCreateString("none"),
                "borderRadius", ReactCreateString("4px"),
                "cursor", ReactCreateString("pointer")
            )
        ),
        ReactCreateString("Login")
    );

    // Wrap everything in a div
    return ReactCreateElement(
        "div",
        ReactCreateProps(
            "style", ReactCreateProps(
                "maxWidth", ReactCreateString("300px"),
                "margin", ReactCreateString("30px auto"),
                "padding", ReactCreateString("24px"),
                "border", ReactCreateString("1px solid #ddd"),
                "borderRadius", ReactCreateString("8px"),
                "backgroundColor", ReactCreateString("#fafaff")
            )
        ),
        username_input,
        password_input,
        button
    );
}