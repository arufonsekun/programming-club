#include <iostream>
#include <stdio.h>
#include <map>
#include <cstring>
#include <vector>

using namespace std;

map<string, int> memory;
vector<string> operations;

void decode(char command[32]){
    string variable;
    string value1;
    string value2;
    bool plusSign = false;
    char buffer;

    unsigned int i = 0;
    while (i <= 8){
        if (command[i] == ':'){
            memory[variable] = 0;
            break;
        }
        else if (command[i] != ' ' & command[i] != ':'){
            buffer = command[i];
            variable.push_back(buffer);
        }
        i++;
    }

    i+= 2;

    while (i < strlen(command) -1){
        if (command[i] != ' ' & command[i] != '+' & plusSign != true){
            buffer = command[i];
            value1.push_back(buffer);
        }

        if (command[i] == ' ' & command[i+1] == '+'){
            plusSign = true;
        }

        if (command[i] != ' ' & command[i] != '+' & plusSign == true){
            buffer = command[i];
            value2.push_back(buffer);
        }
        i++;
    }

    operations.push_back(variable);
    if (value2.empty() == 1){
        memory[variable] = stoul(value1);
    }
    else{
        memory[variable] = memory.at(value1) + memory.at(value2);
    }
}

int main(){
    char command[32];

    while (fgets(command, 32, stdin) != NULL){
        decode(command);
    }

    cout << memory.at(operations.at(operations.size() -1)) << endl;
    return 0;
}
