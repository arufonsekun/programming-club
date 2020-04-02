#include <iostream>
using namespace std;

int main(){
    unsigned int x,y;

    while(1){
        cin >> x >> y;
        if (!cin.eof())
            cout << (x xor y) << endl;
        else
            break;

    }
    return 0;
}
