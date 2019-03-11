#include <iostream>
#include <string.h>

using namespace std;

void solve(char b[20], char l[20]){
    long int size = strlen(l);

    if (l[0] != b[0])(l[0] < b[0] ? printf("%s\n%s\n", l, b) :  printf("%s\n%s\n", b, l)); 
    else if (l[0] == b[0]){
        for (int i = 1; i < size; i++){
            if (l[i] < b[i]){
                printf("%s\n", l);
                printf("%s\n", b);
                return;
            }
            else if (b[i] < l[i]){
                printf("%s\n", b);
                printf("%s\n", l);
                return;
            }
        }
        printf("%s\n", l);
        printf("%s\n", b);
    }
    return;
}

int main(){
    char w1[20], w2[20];
        
    scanf("%s %s", w1, w2);
   
    if (strlen(w1) > strlen(w2)){
        solve(w1, w2);
    }
    else{
        solve(w2, w1);
    }

    return 0;
}
