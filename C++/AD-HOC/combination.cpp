#include <iostream>

using namespace std;

int array[5] = {-2, -1, 0, 1, 2};
int n = 4;

int combination(int i){
    if (i >= n)
        return 0;
    else{
        return (array[n] + array[n+1] == 0 ? 1 : 0) + combination(n+1);
    }

}

int main(){
    int sum = 0;

    for (int i = 0; i <= n; i++){
        sum += combination(i);
    }

    printf("%d\n", sum);
    return 0;
}
