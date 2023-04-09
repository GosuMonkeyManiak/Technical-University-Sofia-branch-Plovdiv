//#include <stdio.h>
//
//int main()
//{
//	int numberOfStudents;
//	
//	printf("Number of students: ");
//	scanf("%d", &numberOfStudents);
//	
//	int facNumbers[numberOfStudents];
//	float averageGrades[numberOfStudents];
//	
//	printf("Enter every student faculty number: \n");
//	
//	for (int i = 0; i < numberOfStudents; i++)
//	{
//		scanf("%d", &facNumbers[i]);
//	}
//	
//	printf("Enter every student average grades in same order like faculty number: \n");
//	
//	float sumAverageGrades = 0;
//	
//	for (int i = 0; i < numberOfStudents; i++)
//	{
//		scanf("%f", &averageGrades[i]);
//		
//		sumAverageGrades += averageGrades[i];
//	}
//	
//	float averageGradeForWholeGroup = sumAverageGrades / ((float)numberOfStudents);
//	
//	printf("Students which have a grade bigger then average grade of group: ");
//	
//	for (int i = 0; i < numberOfStudents; i++)
//	{
//		if (averageGrades[i] > averageGradeForWholeGroup)
//		{
//			printf("%d ", facNumbers[i]);
//		}
//	}
//}