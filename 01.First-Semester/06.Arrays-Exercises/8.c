#include <stdio.h>

int main()
{
	int a[20];
	
	for (int i = 0; i < 20; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int longestSequeStartIndex = 0;
	int longestSequeEndIndex = 0;
	int longestSequeCount = 0;
	
	int currentSequeCount = 0;
	
	for (int i = 0; i < 20 - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			if (currentSequeCount > longestSequeCount)
			{
				longestSequeStartIndex = i - currentSequeCount;
				longestSequeEndIndex = i;
				
				longestSequeCount = currentSequeCount;
			}
			
			currentSequeCount = 0;
		}
		else if (a[i] == a[i + 1])
		{
			currentSequeCount = 0;
			continue;
		}
		
		currentSequeCount++;
	}
	
	if (currentSequeCount > longestSequeCount)
	{
		longestSequeStartIndex = 20 - currentSequeCount;
		longestSequeEndIndex = 20 - 1;
	}
	
	for (int i = longestSequeStartIndex; i <= longestSequeEndIndex; i++)
	{
		printf("Index: %d Number: %d\n", i, a[i]);
	}
}