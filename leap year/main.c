#include <stdio.h>


int main()
{
 int year;
 printf("Please enter a year: ");
 scanf("%d", &year);

 if (year%400==0)
    printf("Leap year");
  else if (year%4==0 && year%100!=0)
    printf("leap year");
  else
    printf("Not leap year");
  getch();
}
