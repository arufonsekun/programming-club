#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    queue<int> q;

    while (true) {
        cin >> n;
        if (n == 0) { 
            break;
        }

        for (int i=1; i <= n; i++) {
            q.push(i);
        }

        cout << "Discarded cards: ";
        if (q.size() == 1) {
            cout << q.front() << '\n';
            cout << "Remaining card:\n";
            continue;
        }
        if (q.size() == 2) {
            cout << q.front() << '\n';
            q.pop();
            cout << "Remaining card: " << q.front() << '\n';
            q.pop();
            continue;
        }
        while (q.size() > 2) {
            cout << q.front() << ", ";
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << '\n';
        q.pop();
        cout << "Remaining card: " << q.front() << '\n';
        q.pop();

    }

    return 0;
}