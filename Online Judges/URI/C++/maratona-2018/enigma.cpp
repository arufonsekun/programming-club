#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
    string message;
    string crib;
    unsigned int possible = 0, j;
    int ok = 1;

    cin >> message;
    cin >> crib;
    
    for (unsigned int i = 0; i <= message.length() - crib.length(); i++){
        j = i;
        ok = 1;
        for (char c : crib){
            if (c == message.at(j)){
                ok = 0;
                break;
            }
            j++;
        }
        
        if (ok == 1){
            possible++;
        }
    }
    

    printf("%d\n", possible);
    return 0;
}
