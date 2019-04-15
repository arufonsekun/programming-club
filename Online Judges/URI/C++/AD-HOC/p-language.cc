#include <iostream>
#include <string>

using namespace std;

int main(){
     string input;
     bool find = false;
     getline(cin, input);

     for(unsigned int i = 0; i < input.length(); i++){
         if (input.at(i) == 'p' and find == true){
             cout << 'p';
            find = false; 
         }
         else if (input.at(i) == 'p' and find == false) find = true;
         else if(input.at(i) != 'p') {
             cout << input.at(i);
             find = false;
         }
     }
     cout << endl;
     return 0;
}
