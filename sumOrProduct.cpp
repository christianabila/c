#include <stdio.h>

int main()
{
	char c = ' ';
	int n;
	
	printf("n = ");
	scanf("%d", &n);
	
	while(c != '1' && c != '2')
	{
		printf("Multiplication - 1\nAddition - 2\nYour choice: ");
		scanf("%c", &c);
	}
	
	int product = 1;
	
	switch(c)
	{
	case '1': 
		for(int i = 1; i <= n; i++)
			product *= i;
		
		printf("\nProduct: %d\n", product);
		break;
		
	case '2':
		printf("\nSum: %d\n", (n*(n+1))/2);
		break;
	}
	
}
