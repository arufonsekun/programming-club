#include <iostream>
#include <cstring>
#include <math.h>
#include <vector>

using namespace std;

unsigned binary1[62];
unsigned binary2[62];
unsigned short int sizeBin1, sizeBin2;

void convert(unsigned long int input, unsigned short int z)
{
    unsigned int short index = 61;
    unsigned long int quocient = input;
    unsigned short int rest = 0;

    if (z == 0){
        sizeBin1 = 0;
        while (quocient >= 1){
            sizeBin1++;
            rest = quocient % 2;
            binary1[index] = rest;
            quocient = quocient / 2;
            index--;
        }
    }

    else{
        sizeBin2 = 0;
        while (quocient >= 1){
            sizeBin2++;
            rest = quocient % 2;
            binary2[index] = rest;
            quocient = quocient / 2;
            index--;
        }
    }

}

void bin2Dec(vector<unsigned short int> output){
    unsigned long int decimalOutPut = 0;

    if (output.size() >= 2){
        decimalOutPut = (output[0] * 2 + output[1]);
        for (unsigned int i = 2; i < output.size(); i++){
            decimalOutPut = decimalOutPut * 2 + output.at(i);
        }
    }
    else{
        decimalOutPut = output.at(0);
    }
    cout << decimalOutPut;

}

void operate(){
    vector<unsigned short int> outputOr;
    vector<unsigned short int> outputAnd;
    unsigned short int bigger = ((sizeBin1 >= sizeBin2) ? sizeBin1 : sizeBin2);

    for (unsigned short int i = 62 - bigger; i < 62; i++){
        outputOr.push_back(binary1[i] | binary2[i]);
        outputAnd.push_back(binary1[i] & binary2[i]);
    }

    bin2Dec(outputOr);
    cout << " ";
    bin2Dec(outputAnd);
    cout << endl;
}

int main()
{
    unsigned int cases;
    unsigned long int input1;
    unsigned long int input2;

    cin >> cases;

    for (unsigned int i = 1; i <= cases; i++){
        memset(binary1, 0, 62);
        memset(binary2, 0, 62);

        cin >> input1 >> input2;

        cout << "Case " << i << ": ";

        convert(input1, 0);
        convert(input2, 1);
        operate();
    }

}
