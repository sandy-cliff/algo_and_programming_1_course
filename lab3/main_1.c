#include <stdio.h>
#include <math.h>

int main()
{
	float x,a,y;

	printf("Enter x:\n");
	scanf("%f", &x);

	printf("Enter a:\n");
	scanf("%f", &a);

	if (x + fabs(a) == 15)
	{
		y = a + 1;
	}
	else if (x + fabs(a) < 15)
	{
		y = x / 2;
	}
	else
	{
		y = x * a; 
	}

	printf("y = %f\n", y);

	return 0;
}