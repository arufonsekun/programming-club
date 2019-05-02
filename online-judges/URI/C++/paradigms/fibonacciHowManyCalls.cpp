#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

vector<int> cache;
vector<int> calls;

void setElements(){
    cache.assign(40, -1);
    cache.at(0) = 0;
    cache.at(1) = 1;

}

void setCallElements()
{
    calls.assign(40, -1);
    calls.at(0) = 0;
    calls.at(1) = 0;

}

int fibonacci(int n)
{
    if (cache.at(n) != -1){
        return cache.at(n);
    }

    else{
        return cache.at(n) = fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int call(int n)
{
    //if (n == 0 or n == 1) return 0;
    if (calls.at(n) != -1){
        return calls.at(n);
    }
    else{
        return calls.at(n) = call(n-1) + call(n-2) + 2;
    }
}

int main(){

    int n;
    int cases;

    cin >> cases;
    
    for (unsigned int e = 0; e < cases; e++){
        cin >> n;
        setElements();
        setCallElements();
        printf("fib(%d) = %d calls = %d\n", n, call(n), fibonacci(n));
    }


    return 0;
}
