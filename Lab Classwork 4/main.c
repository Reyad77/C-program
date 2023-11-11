#include <stdio.h>
int main()   /*The structure of statement 1and statement 2 using if statements as the upper level of if statements is called nesting of if statements*/
{float x,y;
scanf("%f",&x);
if(x<0)
    if (x<=-10)
    y=2*x;
   else
    y=2+x;
else
    if(x<=10)
         y=x-2;
    else
         y=x/10;
printf("\ny=%f",y);
getch();
}
