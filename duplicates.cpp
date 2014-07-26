#include <stdio.h>

int main()
{
	int a[] = {3, 1, 1, 3};
	int beingCompared;
	
	for(int i = 0; i < 3; i++) //O(n)
	{
		beingCompared = a[i]; //O(n)
		
		for(int j = i+1; j < 4; j++) //O(n)
		{
			if(beingCompared == a[j]) //O(n)
			{
				printf("%d\n", beingCompared);
				break;
			}
		}
	}
	
	return 0;
}
