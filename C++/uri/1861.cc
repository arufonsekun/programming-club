#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
 
int main() {
    map<string, int> kills;
    string murderer, murdered;

    while (true) {
        cin >> murderer >> murdered;
        if (cin.eof()) {
            break;
        }
        if (kills[murderer] != -1) {
            kills[murderer]++;
        }
        kills[murdered] = -1;

    }

    cout << "HALL OF MURDERERS" << endl;
    for (auto it = kills.begin(); it != kills.end(); ++it) {
        if (it->second == -1) {
            continue;
        }
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}