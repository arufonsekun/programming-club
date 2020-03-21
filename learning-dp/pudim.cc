#include <iostream>
#include <string>
#include <vector>

using namespace std;

string input1, input2;
vector <vector<int>> cache; 

int lcs(int i, int j){
    if (cache[i][j] != -1) return cache[i][j];

    if (i >= input1.size())return 0;
    if (j >= input2.size()) return 0;

    if (input1[i] == input2[j])
        return  1 + lcs(i+1, j+1);
    else{
        int a = lcs(i, j+1);
        int b = lcs(i+1, j);
        
        return cache[i][j] = max(a, b);
    }
}

int main(){

    cin >> input1;
    cin >> input2;

    int d = max(input1.size(), input2.size());
    
    vector<int> row;
    row.assign(d+1, -1);
    cache.assign(d+1, row);
    
    int s = lcs(0, 0);
    cout << s << endl;
    return 0;
}
