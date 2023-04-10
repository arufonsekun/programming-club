#include <iostream>

using namespace std;

int main() {
    int is_previous_greater;
    long long n, moves = 0;
    cin >> n;
    long long array[n] = {0};

    for (int i=0; i < n; i++) {
        cin >> array[i];
    }

    for (int i=1; i < n; i++) {
        is_previous_greater = array[i-1] > array[i];
        if (is_previous_greater) {
            moves += (array[i-1] - array[i]);
            array[i] = array[i-1];
        }
    }
    cout << moves << endl;
    return 0;
}