#include<stdio.h>  
void demo()
{    
static int i=0;
register int j=0;
auto int k=0;
i++;    
j++;
k++;
 
printf("i = %d\n", i);    
printf("j = %d\n", j);    
printf("k = %d\n", k);    
}  
 
void main()
{    
demo();   
printf ("\n");
demo();   
printf ("\n");
demo();    
}