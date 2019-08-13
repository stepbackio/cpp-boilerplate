#include <vector>
#include <iterator>
#include <emscripten/bind.h>
#include "../lib/fibonacci.cpp"

using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_module) {
  emscripten::function("fibonacci", &fibonacci);
}
