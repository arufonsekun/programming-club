#include <iostream>
#include <algorithm>

using namespace std;

void swap(int* i, int* j)
{
    int temp;
    if (*i > *j)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
}

int main() {
    
    int i, j, x, origi, origj, counter1 = 0, counter2 = 0;

    while (scanf("%d %d", &i, &j) != EOF)
    {
        origi = i;
        origj = j;
        swap(&i, &j);
        x = i == 1 ? i+1 : i;
        while (x <= j) {

            for (int n=x; n != 1;){
            
                if (n % 2 == 1)
                    n = (3 * n) + 1;
                else
                    n = n / 2;

                counter1++;    
            }

            counter1 = max(counter1, counter2);
            counter2 = counter1;
            counter1 = 0;
            x++;
        }
        
        printf("%d %d %d\n", origi, origj, counter2 + 1);
        
        counter1 = 0; counter2 = 0;
    }
    return 0;
}
