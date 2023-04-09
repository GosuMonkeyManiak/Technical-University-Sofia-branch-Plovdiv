//#include <stdio.h>
//
//int main()
//{
//	int n;
//	
//	printf("n = ");
//	scanf("%d", &n);
//	
//	int a[n];
//	int b[n];
//	
//	int isHaveOddNumbers = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//		
//		if (a[i] % 2 != 0)
//		{
//			b[i] = a[i];
//			isHaveOddNumbers = 1;
//		}
//		else 
//		{
//			b[i] = 0;	
//		}
//	}
//	
//	
//	if (isHaveOddNumbers == 1)
//	{
//		printf("Odd numbers: ");
//		
//		for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++)
//		{
//			if (b[i] != 0)
//			{
//				printf("%d ", b[i]);
//			}
//		}	
//	}
//}