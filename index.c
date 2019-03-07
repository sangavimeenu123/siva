#include <stdio.h>
#define AL 5
#define MAX 5
int main() 
{
	float N[AL];
	int i;
	printf("Input the 5 members of the array:\n");
	for(i = 0; i < AL; i++) {
		scanf("%f", &N[i]);
	}
	for(i = 0; i < AL; i++) {
		if(N[i] < MAX) {
			printf("A[%d] = %.1f\n", i, N[i]);
		}
	}
	return 0;
}
