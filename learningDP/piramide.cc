#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pyramid;
vector<vector<int>> cache;

int main(){
    unsigned int n;
    cin >> n;
    //seta a piramide com n vetores com cada n 0s
    pyramid.assign(n, vector<int>(n, 0));
    cache.assign(n, vector<int>(n, -1));

    for (unsigned int i = 0; i < n; i++){
        for (unsigned int j = 0; j < n; j++){
            cin >> pyramid[i][j];
        }
    }
}
