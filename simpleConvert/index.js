
const Module = require('./a.out.js');


////example1
// Module['onRuntimeInitialized'] = function() {
//   let sqrtplus = Module.cwrap('sqrtplus', 'number', ['number','number','number','number'])
//   console.log(sqrtplus(10,1,2,3))
// };
/* The first parameter is the name of the function to be wrapped,
 the second is the return type of the function (or a JavaScript null value if there isn’t one), 
 and the third is an array of parameter types (which may be omitted if there are no parameters). 
 The types are “number” (for a JavaScript number corresponding to a C integer, float, or general pointer),
  “string” (for a JavaScript string that corresponds to a C char* that represents a string) or 
  “array” (for a JavaScript array or typed array that corresponds to a C array; for typed arrays, it must be a Uint8Array or Int8Array)*/



// /* make 2 EMPTY buffers of double(nbyte =8) array of length 5 and send it to C. They are filled and getValue return results form C */
// Module['onRuntimeInitialized'] = function() {
//   fillArray = Module.cwrap('fillArray', null, ['number', 'number']);
//   var nByte = 8
//   var length = 5 
//   var buffer = Module._malloc(length*nByte);

//   var buffer2 = Module._malloc(length*nByte);
//   fillArray(buffer, buffer2, length);
//   for (var i = 0; i < length; i++)
//   {
//     console.log(Module.getValue(buffer+i*nByte, 'double'));
//   }
//   for (var i = 0; i < length; i++)
//   {
//     console.log(Module.getValue(buffer2+i*nByte,'double'));
//   }
// }    
//  


