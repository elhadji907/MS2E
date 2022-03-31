#include<stdio.h>
 
int sum(int n)
{
if (n > 0)
return (n + sum(n-1));
}
 
void main()
{
int add;
add = sum(10);
printf ("Sum of first 10 natural numbers = %d\n", add);
}