
#include "imports/imports.fdefine.h"


int main() {
  ReactStart();
  root = ReactDOMCreateRoot(ReactGetElementById("root")); 
  render_root();
  return 0;
}