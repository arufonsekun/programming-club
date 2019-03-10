#include <iostream>
#include <map>

using namespace std;

int main(){

    int n = 0;
    map<long long int, long long int> sum;

    scanf("%d", &n);
    int sequence[n+1];

    sequence[0] = 0;

    for (int i = 1; i <= n; i++){
        scanf("%d", &sequence[i]);
    }

    for (int i = 0; i < n; i++){
        if(mat.at(sequence[i] + sequence[i+1]) == sum.end()){
            sum[sequence[i] + sequence[i+1]] = 0;
        }
        else{
            sum[sequence[i] + sequence[i+1]] += 1;
        }
    }

    
   
	return 0;
}
