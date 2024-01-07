#include <stdio.h>
int main()
{
   int result,a;
   printf("Please enter any  integer number: ");
   scanf("%d",&a);
   result =abs(-a); // this code will also work without the minus (-)//
   printf("The absolute value is %d", result);
   getch();
}
