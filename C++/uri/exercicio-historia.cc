#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input, length;
    string number, slice_1, slice_2;


    while(cin >> input)
    {
        if (input < 101)
        {
            cout << 1;
        }
        else
        {
            number = to_string(input);        
            length = number.length();
            slice_1 = number.substr(0, length-2);
            slice_2 = number.substr(length-2, 2);

            input = stoi(slice_1);
            length = stoi(slice_2);

            if (length) cout << input+1;
            else cout << input;
        }
        cout << endl;
    
    }
    return 0;
} 
