/* Area of a circle
area= 3.1416 * radius * radius*/
#include <stdio.h>
int main()
{
 float radius, area, PI= 3.1416;
 printf("Please enter the radius of the circle = ");
 scanf("%f", &radius);

 area = PI * radius * radius;
 printf("The area of the circle is = %.2f", area);
 getch();
}
