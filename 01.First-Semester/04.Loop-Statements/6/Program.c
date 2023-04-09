#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	printf("1.Bulgaria\n");
	printf("2.England\n");
	printf("3.Italy\n");
	printf("4.France\n");
	printf("5.Spain\n");
	printf("6.Turkey\n");
	printf("7.Romania\n");

	int countryNumber;

	printf("Choose country: ");
	scanf("%d", &countryNumber);

	switch (countryNumber)
	{
		case 1:
			printf("The capital of Bulgaria is Sofia.\n");
			break;

		case 2:
			printf("The capital of England is London.\n");
			break;

		case 3:
			printf("The capital of Italy is Rome.\n");
			break;

		case 4:
			printf("The capital of France is Paris.\n");
			break;

		case 5:
			printf("The capital of Spain is Madrid.\n");
			break;

		case 6:
			printf("The capital of Turkey is Ankara.\n");
			break;

		case 7:
			printf("The capital of Romania is Bucharest.\n");
			break;

		default:
			printf("Incorrect number!");
			break;
	}
}