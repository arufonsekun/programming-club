#include <iostream>
#include <string>
#include <set>
#include <map>

using namespace std;

int main() {
    set<string> habay_friends;
    set<string> habay_nfriend;
    map<string, int> people_order;
    string name, choice;
    string habay_friend;
    size_t name_length;
    size_t max_name_size = 0;

    int i=0;
    while (true) {
        cin >> name >> choice;
        if (name == "FIM") {
            break;
        }
        if (choice == "NO") {
            habay_nfriend.insert(name);
            continue;
        }
        habay_friends.insert(name);
        people_order[name] = i;
        i++;
        if (name.size() > max_name_size) {
            habay_friend = name;
            max_name_size = name.size();
            continue;
        }
        if (name.size() == max_name_size) {
            habay_friend = people_order[habay_friend] < people_order[name] ? habay_friend : name;
        }
    }

    for (auto itr = habay_friends.begin(); itr != habay_friends.end(); itr++)
    {
        cout << *itr << '\n';
    }
    for (auto itr = habay_nfriend.begin(); itr != habay_nfriend.end(); itr++)
    {
        cout << *itr << '\n';
    }
    cout << "\nAmigo do Habay:\n";
    cout << habay_friend << '\n';
    return 0;
}
