#include <string>
#include <map>
#include <deque>
#include <iostream>

using namespace std;

int main() {
    string input;
    map<char, int> freq;
    deque<char> reorded_pal;
    int number_of_odd_freqs = 0;
    char odd_freq_char; 

    cin >> input;

    for (size_t i=0; i < input.size(); i++) {
        freq[input[i]]++;
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second % 2 == 1) {
            if (number_of_odd_freqs == 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            number_of_odd_freqs++;
            odd_freq_char = it->first;
        }
    }

    if (number_of_odd_freqs != 0) {
        reorded_pal.push_back(odd_freq_char);
        freq[odd_freq_char]--;
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        for (int i=0; i < it->second; i++) {
            if (i % 2 == 0) {
                reorded_pal.push_front(it->first);
            } else {
                reorded_pal.push_back(it->first);
            }
        }
    }

    for (auto it = reorded_pal.begin(); it != reorded_pal.end(); ++it) {
        cout << *it;
    }
    cout << endl;

    return 0;
}