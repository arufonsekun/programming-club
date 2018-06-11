var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');
function fillArray(){
  var num = [parseInt(lines[0])];
  for (i = 0; i <= 9; i++){
    console.log('N['+i+'] = '+num[i]);
    num.push(num[i]*2);
  }
}

function arraySelection(lines){
  var i = 0;
  for(var e of lines){
    if (parseFloat(e) <= 10){
        console.log("A["+i+"] = "+(parseFloat(e)).toFixed(1));
      }
    i++;
  }
}

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
//fillArray(lines);
//arraySelection(lines);
changeArray(lines);
