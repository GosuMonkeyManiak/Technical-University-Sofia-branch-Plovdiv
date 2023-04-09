//#include <stdio.h>
//#include <float.h>
//
//void populateArray(float *pointer, int length);
//float findBiggestElement(float *pointer, int length);
//float findSmallestElement(float *pointer, int length);
//float sum(float *pointer, int length);
//
//int main()
//{
//	float a[4];
//	populateArray(&a, 4);
//	
//	float min = findSmallestElement(&a, 4);
//	float max = findBiggestElement(&a, 4);
//	float arraySum = sum(&a, 4);
//	
//	printf("Min = %f Max = %f Sum = %f\n", min, max, arraySum);
//}
//
//void populateArray(float *pointer, int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		pointer += i;
//		*pointer = (i + 10) / 2.0;
//	}
//}
//
//float findBiggestElement(float *pointer, int length)
//{
//	float max = FLT_MIN;
//	
//	for (int i = 0; i < length; i++)
//	{
//		pointer += i;
//		
//		if (*pointer > max)
//		{
//			max = *pointer;
//		}
//	}
//	
//	return max;
//}
//
//float findSmallestElement(float *pointer, int length)
//{
//	float min = FLT_MAX;
//	
//	for (int i = 0; i < length; i++)
//	{
//		pointer += i;
//		
//		if (*pointer < min)
//		{
//			min = *pointer;
//		}
//	}
//	
//	return min;
//}
//
//float sum(float *pointer, int length)
//{
//	float sum = 0;
//	
//	for (int i = 0; i < length; i++)
//	{
//		pointer += 0;
//		sum += *pointer;
//	}
//	
//	return sum;
//}