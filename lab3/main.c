#include <stdio.h>
#include <math.h>

int main()
{
	float x, y; 
	int result = 0;

	printf("Enter x:\n");
	scanf("%f",&x);
	
	printf("Enter y:\n");
	scanf("%f",&y);
	
	if (fabs(x) <= 1 && fabs(y) <= 1)
	{
		if (x >= 0 && y >= 0)
		{
			if (pow(x, 2) + pow(y, 2) <= 1.0f)
			{
				result = 1;
			}
		}
		else if (x < 0 && y < 0)
		{
			if (y <= x)
			{
				result = 1;
			}
		}
	}

	if (result != 0)
	{
		printf("Your point is in the area\n");
	}
	else
	{
		printf("Your point is not in the area\n");
	}	

	return 0;
}