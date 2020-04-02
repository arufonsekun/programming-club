#include <iostream>
#include <string>

int main(){
    string s1, s2;
    string cpf, p1, p2;
    int counter = 0;
    bool findPoint = false;
    int decimal = 0;

    cin >> s1;
    cin >> s2;

    for (char x : s1){
        if (x == '.' || (x >= '0' && x <= '9')){
            if (counter <= 10 && x != '.'){
                cpf.push_back(x);
                counter++;
            }
            else if (counter > 10){
                if (x == '.') {
                    findPoint = true;
                    decimal = 0;
                }
                if (decimal <= 2) p1.push_back(x);
                if (findPoint == true) decimal++;
            }
        }
    }

    decimal = 0;
    findPoint = false;
    for (char y : s2){
        if (y == '.' || (y >= '0' && y <= '9')){
            if (y == '.')findPoint = true;
            if (decimal <= 2) p2.push_back(y);
            if (findPoint) decimal++;
        }
    }

    double output = stod(p1) + stod(p2);
    cout << "cpf " << cpf << endl;
    printf("%.2lf\n", output);

    return 0;
}
