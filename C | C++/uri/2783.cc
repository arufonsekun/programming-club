#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int m, c, n;
    int s;//figura especial
    int o;//figuras que ja tem
    cin >> n >> c >> m;

    int special[n];
    memset(special, 0, sizeof(special));

    for (int i = 0; i < c; i++){
	scanf("%d", &s);
	special[s-1] = 1;
    }

    for (int i = 0; i < m; i++){
	scanf("%d", &o);
	if (special[o-1] == 1) {
	    special[o-1] = 0;
	    c-=1;
	}
    }

    if (c < 0) printf("%d", 0);
    else printf("%d\n", c);

    return 0;
}
