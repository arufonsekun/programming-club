#include <iostream>

using namespace std;

int main(){
    int values[4] = {1,7,9,3};
    long long int input;
    int t;

    scanf("%d", &t);

    for(int i = 0; i < t; i++){
        scanf("%lld", &input);
        printf("%d\n", values[input % 4]);
    }


    return 0;
}
