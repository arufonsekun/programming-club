#include <iostream>

using namespace std;

int main() {
	
    int weight;
    
    cin >> weight;

    if (weight > 3 && weight % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
	
    return 0;
}	
