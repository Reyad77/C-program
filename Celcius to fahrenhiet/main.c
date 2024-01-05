/*Celcius to Fahrenheit - F= (C * 1.8) + 32*/
#include <stdio.h>
int main()
{
    float C, F;
    printf("Please enter the celcius temperature =");
    scanf("%f", &C);

    F= (C*1.8)+32;
    printf("The fehrenheit temperature is  = %.2f", F);
    getch();
}
