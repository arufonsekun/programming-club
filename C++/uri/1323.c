#include <stdio.h>
#include <math.h>
int main()
{
	int square[100];
	int n;

	square[0] = 1;

	for (int i=1; i < 100; i++)
	{
		square[i] = square[i-1] + (i+1)*(i+1);
	}

	scanf("%d", &n);

	while (n)
	{
		printf("%d\n", square[n-1]);
		scanf("%d", &n);
	}

	return 0;
}

