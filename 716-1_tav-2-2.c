
#include <stdio.h>

int main(void)
{
	int n, i;
	double x, result=1;
	scanf("%d", &n);
	for(i = 1; i < n+1; i++)
	{
		scanf("%lf", &x);
		result*=(x-i);
	}	
	printf("%lf\n", result);
	return 0;
}

