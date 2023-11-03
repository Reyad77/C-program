#include <stdio.h>
int main()
{
int feet, fathoms;      /*Converting 2 fathoms to feet*/
fathoms= 2;
feet= 6*fathoms;
printf("There are %d feets in %d fathoms! \n", feet, fathoms);
printf ("Yes i said %d feet! \n", 6*fathoms);



int feet1, fathoms1;      /*taking input from user and converting fathoms to feet*/
printf("Enter any fathoms value: ");
scanf("%d", &fathoms1);

feet1=6*fathoms1;

printf("%d fathoms,\n(6* %d)=%d feets \n", fathoms1, fathoms1, feet1);
getch();
}
