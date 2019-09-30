#include <stdio.h>

int main()
{
	float a,b;
	int contin = 1;
	char action;

	while (contin == 1)
	{

		printf("Calculator\n");
		printf("Enter expression(Ex. 3+4)\nPossible actions: +, -, /, *\n");
		scanf("%f %c %f",&a, &action, &b);

		switch (action)
		{
			case '+':      
				printf("Your result:%.2f\n", a+b);
				break; 
			case '-':     
			    printf("Your result:%.2f\n", a-b); 
			    break; 
			case '*':      
				printf("Your result:%.2f\n", a*b);
			    break; 
			case '/':      
			    if (b == 0)
		    	{
			    	printf("ERROR");
	            }
	            else
	            {
					printf("Your result:%.2f\n", a/b);
	            }
			    break;
			default:
			    printf("ERROR\n");   
		} 
		printf("\nDo you want to continue?\nyes-1\nno-0\n");
		scanf("%d", &contin);

	}
	return 0;
}