#include <stdio.h>
#include <stdlib.h>

int main()
{
   char name [50];
   printf("Enter your name: ");
   fgets(name, sizeof(name), stdin);
   printf("Hellow ");
   puts(name);
   getch();
}
