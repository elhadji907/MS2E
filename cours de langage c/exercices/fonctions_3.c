#include<stdio.h>  
int sum(int *a, int *b)
{
int c;
c = *a + *b;
*a = *a+1;
return c;
}
 
void main()
{
int x = 100;
int y = 200;
int add;
printf ("%d + %d = ", x,y);
add = sum(&x,&y);
printf ("%d",add);
printf ("\nLa nouvelle valeur de x est %d\n",x);
}