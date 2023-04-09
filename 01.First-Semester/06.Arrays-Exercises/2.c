//#include <stdio.h>
//
//int main()
//{
//	int firstNumber;
//	int secondNumber;
//
//	printf("First number = ");
//	scanf("%d", &firstNumber);
//	
//	printf("Second number = ");
//	scanf("%d", &secondNumber);
//	
//	int n = secondNumber;
//	
//	if (firstNumber > secondNumber)
//	{
//		n = firstNumber;
//	}
//	
//	int greatestCommonDivisor;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		if (i > firstNumber || i > secondNumber)
//		{
//			break;
//		}
//		
//		if (firstNumber % i == 0 && secondNumber % i == 0)
//		{
//			greatestCommonDivisor = i;
//		}
//	}
//	
//	printf("Greatest common divisor of %d and %d is %d.", firstNumber, secondNumber, greatestCommonDivisor);
//}