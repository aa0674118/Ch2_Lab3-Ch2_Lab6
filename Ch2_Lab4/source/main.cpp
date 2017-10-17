#include <stdio.h>
#include <stdlib.h>
int main()
{
	int grade=0;
	int acount=0;
	int bcount=0;
	int ccount=0;
	int dcount=0;
	int fcount=0;
	printf("Enter the letter grades.\n");
	printf("Enter the EOF character to end input.\n");
	while ((grade = getchar()) != EOF)
	{
		switch (grade)
		{
		case 'A':
		case 'a':
			acount+=1;
			break;
		case 'B':
		case 'b':
			bcount+=1;
			break;
		case 'C':
		case 'c':
			ccount+=1;
			break;
		case 'D':
		case 'd':
			dcount+=1;
			break;
		case 'F':
		case 'f':
			fcount+=1;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			printf("Incorrect letter grade entered.\n");
			printf("Enter a new grade.\n");
			break;
		}
	}
	printf("\nTotals for each letter grade are:\n");
	printf("A:%d\n", acount);
	printf("B:%d\n", bcount);
	printf("C:%d\n", ccount);
	printf("D:%d\n", dcount);
	printf("F:%d\n", fcount);
	system("pause");
	return 0;
}