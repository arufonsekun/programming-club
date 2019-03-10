#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void sliceReverse(string input){
    vector<string> slices;
    string buffer;

    for (unsigned i = 0; i < input.size(); i++){
        if (input.at(i) != 32) {
            buffer += input.at(i);
        }
        else{
            //cout << buffer << endl;
            slices.push_back(buffer);
            buffer.clear();
        }
    }

    for (int i  = 0; i < slices.size(); i++){
        for (int j = slices.at(i).size()-1; j >= 0; j--){
            cout << slices.at(i).at(j);
        }
        cout << " ";
    }
    cout << endl;
}

int main(int argc, char *argv[]){
    string input;
    string afterPoint;
    ifstream file;
    
    file.open(argv[1], ios::in);

    //cout << argv[1] << endl;

    while(getline(file, input)){
        sliceReverse(input);
    }
    file.close();

    return 0;
}
