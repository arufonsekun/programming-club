#include <iostream>

using namespace std;

int** createBITree(int x, int y) {
	int** BITree = new int* [x+1];
	
	for(int i=0; i <= x; i++) {
		BITree[i] = new int[y+1];
		for (int j=0; j <= y; j++) {
			BITree[i][j] = 0;	
		}
	}

	return BITree; 
}

void printRow(int row[], int y) {
	for (int i=0; i <= y; i++) {
		cout << row[i] << " ";
	}
	cout << endl;
}

void printMatrix(int** matrix, int x, int y) {

	for (int i=0;i <= x; i++){
		printRow(matrix[i], y);
	}
}

void update(int** BITree, int nx, int ny, int ix, int iy, int val) {

	ix+=1; iy+=1;
	int y = 0;

	while (ix <= nx){
		y = iy;
		while (y <= ny) {
			BITree[ix][y] += val;
			y += y & (-y);
		}
		ix += ix & (-ix);
	}

}

int getSum(int** BITree, int nx, int ny, int ix, int iy) {
	
	int sum = 0, y=0;
	ix+=1; iy+=1;
	cout << "x: " << ix << "y: " << iy << endl; 

	while (ix > 0) {
		y = iy;
		while(y > 0){
			sum += BITree[ix][y];
			y -= y & (-y);
		}
		ix -= ix & (-ix);
	}

	return sum;
}

int main() {
	int x, y, p, q;
	char a;
	int nx, xy, yz, w, rangeSum;

	scanf("%d %d %d", &x, &y, &p);
	while(x || y || p) {
		
		scanf("%d", &q);	
		int** BITree = createBITree(x, y);

		for(int i=0; i < q; i++) {
			cin >> a >> nx >> xy >> yz;
			if (a == 'A'){
				update(BITree, x, y, xy, yz, nx);
				// printMatrix(BITree, x, y);
			}
			else{
				cin >> w;
				rangeSum = getSum(BITree, x, y, yz, w) - 
						   getSum(BITree, x, y, yz, xy-1) -
						   getSum(BITree, x, y, nx-1, w) +
						   getSum(BITree, x, y, nx-1, xy-1); 
				cout << rangeSum * 10 << endl;
			}
		}
	//	printMatrix(BITree, x, y);
		
	//	printf("0 0 0  pra sair\n");
		scanf("%d %d %d", &x, &y, &p);
	}

	return 0;
}
