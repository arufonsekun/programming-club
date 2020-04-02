#include <iostream>

using namespace std;

int main()
{
    int n, input_length;
    string input;
    cin >> n;

    for (int i=0; i < n; i++)
    {
        cin >> input;

        if (input.length() <= 10)
        {
            cout << input;
        }
        else
        {
            input_length = input.length();
            cout << input.at(0) << input_length-2 << input.at(input_length-1);
        }
        cout << endl;
    }
    return 0;
}
