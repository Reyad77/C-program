#include <stdio.h>


int main()
{
    /* (int a = 10;
    float x = 2.5;
    char c= '*'; )

   1. warning C4244:'=' : conversion form 'constdouble' to 'int', possible loss of data
   2. erron C2065:'f' : undeclared identifier.*/
     int a;
     float f;
      a=3;
      f=1.2378;
      printf("a=%d \n",a);
      printf("f=%.2f \n ", f);
      getch();

}
