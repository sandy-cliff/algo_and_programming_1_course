#include <stdio.h>
#include <math.h>


#define _USE_MATH_DEFINES


int main()
{
    float R;

    printf("Enter R:\n");
    scanf("%f", &R);

    float sphereSpace = pow(R, 3) * M_PI * 4.0f/3.0f;
    float cubeSpace = pow(2*R, 3);

    printf("Difference: %f\n", cubeSpace-sphereSpace);

    return 0;
}