//#include <stdio.h>
//
//int main()
//{
//	int a[12];
//	
//	for (int i = 0; i < 12; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < 12 - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	
//	printf("Sorted array: ");
//	
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}