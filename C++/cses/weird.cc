#include <iostream>
using namespace std;

int main() {
  long long input;
  cin >> input;
  while (true) {
    cout << input;
    if (input == 1) break;
    if (input % 2 == 0) input /= 2;
    else input = input * 3 + 1;
    cout << " ";
  }
  cout << '\n';
  return 0;
}
