#include <stdio.h>

int main()
{
	int a[] = {3, 1, 1, 3};
	
	for(int i = 0; i < 3; i++) //O(n)
	{
		for(int j = i+1; j < 4; j++) //O(n)
		{
			if(a[i] == a[j]) //O(n)
			{
				printf("%d\n", a[i]);
				break;
			}
		}
	}
	
	return 0;
}
