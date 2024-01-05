//Swapping number without temporary variable//
#include <stdio.h>
int main()
{
    int num1=20;
    int num2=30;

    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;

    printf("The first number is %d \n", num1);
    printf("The second number is %d",num2 );
    getch();
}
