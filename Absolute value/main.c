#include <stdio.h>
int main()
{
   int result,a;
   printf("Please enter any  integer number: ");
   scanf("%d",&a);
   result =abs(-a);
   printf("The absolute value is %d", result);
   getch();
}
