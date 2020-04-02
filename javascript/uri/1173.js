var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
function fillArray(){
  var num = [parseInt(lines[0])];
  for (i = 0; i <= 9; i++){
    console.log('N['+i+'] = '+num[i]);
    num.push(num[i]*2);
  }
}
fillArray(lines);
