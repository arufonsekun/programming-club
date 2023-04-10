#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int repetitions=0, max=-1;
    cin >> input;
    char previous, current = input[0];
    for (int i=0; i < input.length(); i++) {
        char current = input[i];
        if (current == previous) {
            repetitions++;
        } else {
            previous = current;
            repetitions = 1;
        }
        max = repetitions > max ? repetitions : max;
    }
    cout << max << endl;
}
