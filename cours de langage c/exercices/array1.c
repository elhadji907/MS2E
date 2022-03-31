#include<stdio.h>  
 
void main()
{    
int table[10] = {5,10,15,20,25,30,35,40,45,50};
int i;
for (i=1;i<11;i++)
{
printf ("5 * %d = %d", i,table[i-1]);
printf ("\n");
}
}