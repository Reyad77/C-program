#include <stdio.h>
int main()
{
  int num1, num2, large;
  printf("Please enter two integer numbers: ");
  scanf("%d %d", &num1, &num2);

  large= (num1>num2)? num1 : num2;
  printf("The large number is %d", large);
  getch();
}
