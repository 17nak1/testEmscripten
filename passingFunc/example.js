


const Module = require('./callback.js');

 Module['onRuntimeInitialized'] = function() {
function back(text){
    // console.log(Module.Pointer_stringify(text)); // if input is string
    console.log(text)
}
var pointer = Module.addFunction(back, 'undefined');
var call = Module.cwrap('call', 'void', ['pointer']);
call(pointer);
Module.removeFunction(pointer);
}