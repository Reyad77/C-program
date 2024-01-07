#include <stdio.h>
int main()
{

    double x, result, result2,result3;
    printf("Enter any number for x: ");
    scanf("%lf",&x);
    result = log(x);
    result2=log10(x);
    result3=sin(x);

    printf("\nThe result of log(%.2lf) = %.2lf. \n",x,result);
    printf("\nThe result of log10(%.2lf) = %.2lf. \n",x,result2);
    printf("\nThe result of sin(%.2lf) = %.2lf. \n",x,result3);
    getch();

}
