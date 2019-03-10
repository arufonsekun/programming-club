#include <iostream>
#include <cstring>
using namespace std;

bool turn = true;

void sintaxCorrector(string text){
    string output;

    for (char c : text){
        if (c == '"'){
            if (turn){
                output.append("``");
                turn = false;
            }
            else{
                output.append("''");
                turn = true;
            }
        }
        else{
            output.push_back(c);
        }
    }   
    cout << output;
    return;
}

int main(){
    string input;
    
    while (getline(cin,input)){
        if (!cin.eof()){
            sintaxCorrector(input);
            cout << endl;
        }
    }
    return 0;
}
