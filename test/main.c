#include <stdio.h>


int main()
{
    printf("Reyad\n");
    printf("Taizhou University\n");

    int num1= 56, num2=13;
    float num3=41.23;
    char num4='x';
    double num5=65.1215846847;

    printf("Number 1 is %.3lf \n",num5);
    printf("Number 2 is %d \n",num1);
    printf("Number 3  is %.2f \n",num3);
    printf("Numbers are %d, %d \n",num1, num2);
    printf("Character is %c \n ",num4);
    printf("Numbers are %d, %d, %.2f, %.3lf, %c \n",num1,num2,num3,num5,num4);

    int num;
    printf("Please enter an integer value :");
    scanf("%d", &num);
    printf("You have entered the number : %d \n",num);

    float fnum;
    printf("Please enter a float number : ");
    scanf("%f", &fnum);
    printf("you have entered the number : %.2f \n",fnum);

    double dnum;
    printf("Please enter a double number : ");
    scanf("%lf", &dnum);
    printf("You have entered the number : %lf \n",dnum);

    char cnum;
    printf("Please enter a character :");
    scanf("%s", &cnum);
    printf("You have entered the character : %c \n",cnum);


getch();
}

