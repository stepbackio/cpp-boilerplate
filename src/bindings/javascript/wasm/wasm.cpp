#include <vector>
#include <iterator>
#include <emscripten/bind.h>
#include "../../../libProject/fibonacci.cpp"

using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_module) {
  emscripten::function("fibonacci", &fibonacci);
}
