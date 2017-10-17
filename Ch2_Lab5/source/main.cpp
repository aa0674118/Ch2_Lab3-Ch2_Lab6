#include <stdio.h>
#include <stdlib.h>
int main()
{
	double population = 6763;
	double newpop = 6763;
	double newpop2 = 6763;
	double rate = 0.0118;
	double a=1;
	int year;
	printf("%15s%30s%25s\n","Years from now","Population(in millions)","Increase(in millions)");
	for (year = 1; year <= 75; year++)
	{
		for (int i = 1; i <= year; i++)
		{
			a*= (1 + rate);
		}
		newpop2 = newpop;
		newpop = population*a;
		printf("%15d%30.2lf%25.2f\n",year,newpop,newpop-newpop2);
		a = 1;
	}
	system("pause");
	return 0;
}