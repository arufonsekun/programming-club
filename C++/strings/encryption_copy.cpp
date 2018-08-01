#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string shiftRight(string message){
  ostringstream out;
  char letter = ' ';
  for (int i = 0; i < message.size(); i++){
    letter = message[i];
    if ((letter >= 'a' & letter <= 'z') | (letter >= 'A' & letter <= 'Z')){
      letter += 3;
    }
    out << letter;
  }
  return out.str();
}

string reverseShiftHalfLeft(string encryted){
  ostringstream reversed;
  ostringstream shiftReversed;
  char output;
  int middle = 0;

  for(int i = encryted.size(); i >= 0; i--){
    reversed << encryted[i];
  }

  if (reversed.str().size() % 2 == 0){
    middle = reversed.str().size() / 2;
  }
  else{
    middle = (int) reversed.str().size() / 2 +1;
  }

  shiftReversed << reversed.str().substr(0, middle);

  for(int index = middle; index < reversed.str().size(); index ++){
    output = reversed.str()[index] -1;
    shiftReversed << output;
  }

  return shiftReversed.str();
}

int main() {
  int cases = 0;
  vector<string> strings;
  string outMessage;
  cin >> cases;

  for (int i = 0; i <= cases ; i++){
    getline(cin, outMessage);
    outMessage = shiftRight(outMessage);
    strings.push_back(reverseShiftHalfLeft(outMessage));
  }

  for (int word = 0; word < strings.size(); word++){
    cout << strings[word] << '\n';
  }

  return 0;
}