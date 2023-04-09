//#include <stdio.h>
//
//int main()
//{
//	int n;
//	
//	printf("n = ");
//	scanf("%d", &n);
//	
//	int rotate[n];
//	
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &rotate[i]);
//	}
//	
//	for (int i = 0; i < n / 2; i++)
//	{
//		int temp = rotate[i];
//		rotate[i] = rotate[n - 1 - i];
//		rotate[n - 1 - i] = temp;
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", rotate[i]);
//	}
//}