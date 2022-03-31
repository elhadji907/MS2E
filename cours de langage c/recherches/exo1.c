#include <stdio.h>
int main()
{
  int x = 50;   // Normal variable declaration 
  int *y;     // pointer variable declaration
  y = &x;     // Address of variable x is stored in pointer variable
  printf("The value of x is : %d\n", x);    // The value of x is : 50
  printf("The address of x is : %p\n", &x);  // The address of x is : BD0023
  printf("The address of y is : %p\n", &y);  // The address of x is : DB1221
  printf("The address stored at y is : %p\n", y); // The address stored at y is : BD0023
  printf("The value of *y(as a pointer) is : %d\n", *y);  // The value of *y (as a pointer) is: 50
  return 0;
}