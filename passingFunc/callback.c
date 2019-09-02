// Copyright 2012 The Emscripten Authors.  All rights reserved.
// Emscripten is available under two separate licenses, the MIT license and the
// University of Illinois/NCSA Open Source License.  Both these licenses can be
// found in the LICENSE file.

#include <math.h>

void call(void (*back)(int)){
    back(11);
}

/*void call(void (*back)(char*)){
    back("Hello!");
}
*/

/* emcc callback.c -o callback.js -s  EXPORTED_FUNCTIONS='["_call"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap","Pointer_stringify","addFunction","removeFunction"]' -s RESERVED_FUNCTION_POINTERS=20*/



