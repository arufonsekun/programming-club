var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function arraySelection(lines){
  var i = 0;
  for(var e of lines){
    if (parseFloat(e) <= 10){
        console.log("A["+i+"] = "+(parseFloat(e)).toFixed(1));
      }
    i++;
  }
}
arraySelection(lines);
