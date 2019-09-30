#include <stdio.h>
#include <math.h>


float log_base(float x, float base)
{
  return log(x)/log(base);
}


int main()
{
  float x, y, z, a_denum;
  
  do
  {
    printf("Enter x:\n");
      scanf("%f", &x);
      printf("Enter y:\n");
      scanf("%f", &y);
      printf("Enter z:\n");
      printf("NOTE: z should not be equal -(x-2.3)^(1/5)\n");
      scanf("%f", &z);

      a_denum = pow(fabs(x - 2.3f), 1.0f/5.0f);

      if (x < 2.3)
      {
        a_denum *= -1;
      }
  } while (z == a_denum);

  a_denum = z - a_denum;
  
  float a = (pow(log(1 + cos(fabs(3 * x * y))), 2) + 0.17f * z)/a_denum;
  float b = (y * pow(tan(x), 2)/7.0f + 5.8f)/(log_base(4 + sin(z), 4));

  printf("a = %5.2f\n", a);
  printf("b = %5.2f\n", b);

  return 0;
}