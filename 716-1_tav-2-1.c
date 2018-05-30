
#include <stdio.h>

int main(void)
{
	int n, i;
	double x, summ=0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%lf", &x);
		summ+=x;
	}	
	printf("%lf\n", summ);
	return 0;
}

