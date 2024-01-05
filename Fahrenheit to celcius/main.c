// Fahrenheit to celcius//
#include <stdio.h>
int main()
{
  float F, C;
  printf("Please Enter a fahrenheit temperature = ");
  scanf("%f", &F);

  C=(F-32)/1.8;
  printf("The fahrenheit temperature is = %.2f", C);

  getch();

}
