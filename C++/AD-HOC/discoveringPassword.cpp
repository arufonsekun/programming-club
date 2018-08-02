#include <iostream>
#include <cstdio>
#include <array>
#include <vector>

using namespace std;

array<float, 10> oilness;

void findPassword(int size, unsigned int cases){

  float biggest = 0;
  unsigned int index = 0;

  cout << "Caso " << cases << ": ";

  for (unsigned int i = 0; i < size; i++){
    for(unsigned short int e = 0; e < 10; e++){
      if(biggest < oilness[e]){
        biggest = oilness[e];
        index = e;
      }
    }
    cout << index;
    oilness[index] = -1;
    biggest = -1;
  }

  cout << endl;

}

int main(){

  int digits, cases = 1;

  while(cin >> digits){
    if (cin.eof() == true){
      break;
    }

    else{
        for (unsigned short int i = 0; i < 10; i++){
          cin >> oilness[i];
        }
        findPassword(digits, cases);
        cases++;
    }

  }

  return 0;
}
