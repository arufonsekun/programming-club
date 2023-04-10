#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, r, diver, all_returned_counter;
    set<int> living_divers;

    while (true) {
        cin >> n >> r;
        for (int i=0; i < r; i++) {
            cin >> diver;
            living_divers.insert(diver);
        }

        if (cin.eof()) {
            break;
        }

        for (int i=1; i <= n; i++) {
            if (!living_divers.count(i)) {
                cout << i << " ";
            } else {
                all_returned_counter++;
            }
        }

        if (all_returned_counter == n) {
            cout << "*";
        }

        cout << endl;

        living_divers.clear();
        all_returned_counter = 0;
    }

    return 0;
}
