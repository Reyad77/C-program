#include <stdio.h>

int main()
{int x;
printf("Enter any integer number: ");
scanf("%d", &x);

printf("dec= %d; Octal=%o; hex=%x \n", x, x, x);
printf("dec=%d; Octal=%#o; hex=%#x \n", x, x, x);
getch();
}
