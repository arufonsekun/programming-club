var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function changeArray(lines){
  var i1 = 0;
  var i2 = 19;
  var pos1, pos2;
  if (lines.length == 21){
    lines.pop();
  }
  while(i1 <= 11 & i2 >= 10){
    pos1 = lines[i1];
    pos2 = lines[i2];
    lines[i1] = pos2;
    lines[i2] = pos1;
    i1++;
    i2--;
  }
  var index = 0;
  for (var e of lines){
    console.log('N['+index+'] = '+lines[index]);
    index ++;
  }
}
changeArray(lines);
