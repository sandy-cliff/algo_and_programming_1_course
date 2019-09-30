#include <stdio.h>

int main()
{
	float a,b = 17.00;
	int res;
	int contin = 1;

	while (contin ==1)
	{
		printf("What time is it?\n");
		scanf("%f", &a);
		res = b - a;

		if ( a > 17.00 ) 
		{
			printf("YOUR DAY IS OVER\n");
		}
		else if ( a < 9.00 )
		{
			printf("YOUR DAY HAS NOT STARTED\n");
		}
		else 
		{
			printf("%d hours left before the end of the working day\n", res);
		}
	printf("\nDo you want to continue?\nyes-1\nno-other meaning\n");
	scanf("%d", &contin);
	}
		return 0;
}