#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> cache;
int loopsDP = 0;

void setElements(unsigned int n){

    if (n > 1){
        for (unsigned int i = 0; i <= n; i++){
            cache.push_back(-1);
        }
        cache.at(0) = 0;
        cache.at(1) = 1;
    }
    else{
        cache.push_back(0);
        cache.push_back(1);
    }
}

int fibonacci(int n)
{
    loopsDP++;
    if (cache.at(n) != -1){
        return cache.at(n);
    }

    else{
        return cache.at(n) = fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){

    int n;
    scanf("%u\n", &n);
    setElements(n);

    cout << n << " nth = " << fibonacci(n) << '\n';
    cout << n << " nth = " << fibo1(n) << '\n';
    cout << "Loops Dinamic Approach: " << loopsDP << '\n';
    cout << "Loops Shit Approach: " << loopsShit << '\n';

    return 0;
}
