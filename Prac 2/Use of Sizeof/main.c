#include <stdio.h>
int main()
{
  int i;
  float f;
  double d;
  char c;

  printf("Size of int is %d bytes, \n", sizeof(i));
  printf("Size of float is %d bytes. \n", sizeof(f));
  printf("Size of double is %d bytes. \n", sizeof(d));
  printf("Size of char is %d byte. \n", sizeof(c));

  getch();
}
