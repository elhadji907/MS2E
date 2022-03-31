#include<stdio.h>  
int sum(int *a, int *b)
{
int c;
c = *a + *b;
return c;
}
 
void main()
{
int x = 100;
int y = 200;
int add;
add = sum(&x,&y);
printf ("%d + %d = %d", x,y,add);
printf("\n");
}