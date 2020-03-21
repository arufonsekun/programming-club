#include <stdlib.h>
#include <stdio.h>

long int primo = 1000000007;

long int solve(int n, int k){
    
    long int ways = k;
    long int diff = k, same = 0;

    for (int i = 1; i < n; i++){
        same = diff;
        diff = ways * (k - 1);
        diff = diff % primo;
        ways = (same + diff) % primo;
    }
    return ways;
}

int main(){
    int cases, n, k;
    scanf("%d", &cases);

    while(cases--){
        scanf("%d %d", &n, &k);
        printf("%ld\n", solve(n, k));
    }

    return 0;
}
