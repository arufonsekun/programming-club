#include <iostream>

using namespace std;

int main()
{
    int n, k, input, p_input, level_up=0;

    cin >> n >> k;
    k--;

    for (int i=0; i < n; i++)
    {
        cin >> input;
        if (i == k) p_input = input;
        if (i <= k && input) level_up++;
        if (i > k && p_input == input && input) level_up++;
    }

    cout << level_up << endl;

    return 0;
}
