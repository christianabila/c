#include <stdio.h>

int main()
{
	int n;
	
	printf("n = ");
	scanf("%d", &n);
	
	printf("Sum: %d\n", (n*(n+1))/2);
	
	int sum = 0;
	
	for(int i = 1; i <= n; i++)
	{
		if(i%3 == 0 || i%5 == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	}
	
	printf("\nWith modification: %d\n", sum);
	
	return 0;
}
