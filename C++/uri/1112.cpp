#include <iostream>

using namespace std;

#define MAX 1002

int BITree[MAX][MAX];
int x, y;

void setBITree() {

	for(int i=0; i <= x; i++) {
		for (int j=0; j <= y; j++) {
			BITree[i][j] = 0;	
		}
	}
}

void update(int ix, int iy, int val) {

	int y1 = 0;
	ix+=1; iy+=1;

	while (ix <= x){
		y1 = iy;
		while (y1 <= y) {
			BITree[ix][y1] += val;
			y1 += y1 & (-y1);
		}
		ix += ix & (-ix);
	}

}

int getSum(int ix, int iy) {

    ix++; iy++;
	int sum = 0, y1=0;

	while (ix > 0) {
		y1 = iy;
		while(y1 > 0){
			sum += BITree[ix][y1];
			y1 -= y1 & (-y1);
		}
		ix -= ix & (-ix);
	}

	return sum;
}

void swap(int* i, int* j) {
    int aux = *j;
    *j = *i;
    *i = aux;
}


int main() {
	char a;
	int p, q;
    int r1, r2, r3, r4;

    int n, x1, y1, z, w;

	scanf("%d %d %d", &x, &y, &p);
	while(x || y || p) {

		scanf("%d", &q);	
        setBITree();

		for(int i=0; i < q; i++) {
			cin >> a;
			if (a == 'A'){
				cin >> n >> x1 >> y1;
                update(x1, y1, n);
			}
			else{
                cin >> x1 >> y1 >> z >> w;
                
                if (x1 > z) swap(&x1, &z);
                if (y1 > w) swap(&y1, &w);

				r1 = getSum(z, w);
                r2 = getSum(z, y1-1);
                r3 = getSum(x1-1, w);
                r4 = getSum(x1-1, y1-1);  
                
				cout << (r1 - r2 - r3 + r4) * p << endl;
			}
		}
        cout << endl;
		scanf("%d %d %d", &x, &y, &p);
	}

	return 0;
}
