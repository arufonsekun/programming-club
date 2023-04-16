#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int cases, diamonds;
    string input;
    stack<char> mine;

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> cases;
    for (int i=0; i < cases; i++) {
        cin >> input;
        diamonds = 0;

        for (size_t j=0; j < input.size(); j++) {
            if (input.at(j) == '.') {
                continue;
            }
            if (input.at(j) == '<') {
                mine.push(input.at(j));
                continue;
            }
            if (mine.empty()) {
                continue;
            }
            if (mine.top() == '<' && input.at(j) == '>') {
                diamonds++;
                mine.pop();
            }
        }
        cout << diamonds << '\n';
        // Clear the stack
        mine=stack<char>();
    }
    return 0;
}