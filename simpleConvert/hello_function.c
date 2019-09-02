// https://emscripten.org/docs/porting/connecting_cpp_and_javascript/Interacting-with-code.html
// https://stackoverflow.com/questions/55446258/emscripten-pass-uint8-t-array-to-javascript
// https://emscripten.org/docs/api_reference/preamble.js.html

#include <math.h>
#include <stdio.h>


/*//example1
float sqrtplus(float x1, float x2, float x3, float x4) {
  return sqrt(x1) + x2 + x3 + x4;
}

double sqrtplus(float *x) {
  printf("%f\n", x[1]);
  return x[1];
}
*/
/*emcc hello_function.c -s EXPORTED_FUNCTIONS='["_sqrtplus"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]'
*/


/*//example2
void fillArray(double * a, double * b, int len)
{
  for (int i = 0; i<len; i++)
  {
    a[i] = 2.1E1 *i;
    b[i] = .01 * i;
  }
  for (int j = 0; j < len; ++j)
  {
    printf("a[%d] = %f\n", j, b[j]);
  }
}*/
/*emcc hello_function.c -s EXPORTED_FUNCTIONS='["_fillArray"]' -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap", "getValue"]'8/



