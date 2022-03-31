#include<stdio.h>
 
void main()
{  
int n = 60784; 	 
int *a;
int **b;    
a = &n;    
b = &a;    
 
printf("n = %d \n",n); 	 
printf("a = %x \n",a);
printf("b = %x \n",b);
printf("&n = %x \n",a);
printf("&a = %x \n",b);
}