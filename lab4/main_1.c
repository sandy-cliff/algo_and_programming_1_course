#include <stdio.h>

int main()
{
	int a;
	int contin = 1;

	while (contin ==1)
	{
		printf("How many seconds are left?\n");
		scanf("%d", &a);

		switch (a)
		{
			case 28800 :
				printf("8 hours left\n");
				break;
			case 25200 ... 28799 :
				printf("7 hours left\n");
				break;
			case 21600 ... 25199 :
				printf("6 hours left\n");
				break;
			case 18000 ... 21599 :
				printf("5 hours left\n");
				break;
			case 14400 ... 17999 :
				printf("4 hours left\n");
				break;
			case 10800 ... 14399 :
				printf("3 hours left\n");
				break;
			case 7200 ... 10799 :
				printf("2 hours left\n");
				break;
			case 3600 ... 7199 :
				printf("1 hours left\n");
				break;
			case 1 ... 3599 :
				printf("less than an hour\n");
				break;
			case 0 :
				printf("day is over\n");
				break;
			default :
				printf("ERROR\n");
		}

		printf("\nDo you want to continue?\nyes-1\nno-other meaning\n");
		scanf("%d", &contin);
	}
		return 0;
}