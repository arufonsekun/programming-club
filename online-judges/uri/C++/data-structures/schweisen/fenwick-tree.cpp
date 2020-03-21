#include <iostream>
using namespace std;

void update(int BITree[], int n, int index, int val) {
	
	index = index+1;

	while(index <= n) {
		BITree[index] += val;
		index += index & (-index);	
	}
}

int* build(int input_array[], int BITree[], int n) {

	for(int i=0; i < n; i++) {
		update(BITree, n, i, input_array[i]);
	}

	return BITree;
}

int getSum(int BITree[], int index) {
	
	int sum = 0;	

	while(index > 0) {
		sum += BITree[index];
		index -= index & (-index);
	}
	return sum;
}

void printArray(int array[], int n) {

	for (int i=0; i < n; i++){
		cout << array[i] << " "; 
	}
	cout << endl; 
}

void printMenu() {
	printf("\t\t------------------------------------------\n");
	printf("\t\t| 1. Print input array                   |\n");
	printf("\t\t| 2. Print binary indexed tree           |\n");
	printf("\t\t| 3. Query for a prefix sum              |\n");
	printf("\t\t| 4. Update a value                      |\n");
	printf("\t\t------------------------------------------\n");
}

int main() {

	int n=0, input_value=0;
	
	printf("Type the array lenght:");
	scanf("%d", &n);
	
	int* input_array = new int[n];
	int* BITree = new int[n+1];

	for (int i=0; i<n; i++) {
		printf("%c", '>');
		scanf("%d", &input_value);
		input_array[i] = input_value;
		BITree[i] = 0;
	} 

	printMenu();
	BITree = build(input_array, BITree, n);
	printArray(BITree, n);
	cout << "The sum of the first 5 elements is " << getSum(BITree, 5) << endl;
	printArray(input_array, n);

	return 0;
}
