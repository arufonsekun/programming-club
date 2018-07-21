#include <stdio.h>
#include <string.h>
#include <array>

int main(){

	char input[1000];
	unsigned short int cases = 1;
	scanf("%d", cases);
	array<array<char, 1000>, cases > strings;
	gets(input);
	strings.push_back(input);
	printf("%d\n", strlen(input));

	return 0;
}
// parei de fazer o problema de encriptação em C pq a merda do gcc não achava o arquivo array