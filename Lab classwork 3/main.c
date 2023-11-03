#include <stdio.h>
int main()
{
    int x;        /*program for even and odd number*/
    printf("Enter an integer number x: ");
    scanf("%i", &x);
    if ( x%2==0) {
        printf("%i is an odd number. \n", x);
        }
    else {
            printf("%i is an odd number. \n",x);
    }

    int year, rem_4, rem_100, rem_400; //program to determine if a year is leap year or not//
    printf("Enter a year: ");
    scanf("%i", &year);

    rem_4 = year%4;
    rem_100 = year%100;
    rem_400 = year% 400;
     if (rem_4==0 && rem_100!=0 || rem_400==0){
         printf("It is a leap year. \n");
         }
    else {
            printf("It's not a leap year. \n");
            }


    getch ();
}

