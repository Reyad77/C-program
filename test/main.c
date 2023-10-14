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

    /*int num;
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
    printf("You have entered the character : %c \n",cnum);*/


    int num90;              /* defined a variable called num*/
    num90=1;               /*assigned a value to num*/

    printf("I am simple "); /* use the printf() function*/
    printf("computer. \n");
    printf("My favourite number is %d because it is first. \n",num90);   /*integer= %d, float= %f, character= %c, double= %lf*/

    printf("hellow \n");

    int i;
    float f;
    double d;
    char c;

    printf("Size of  i = %d bytes \n", sizeof(i));
    printf("Size of f = %d bytes \n", sizeof(f));
    printf("Size of d= %d bytes \n", sizeof(d));
    printf("Size of c = %d bytes \n", sizeof(c));


getch();
}

