#include<stdio.h>
 
void main()
{  
int n = 10; 	 
int *a;
a = &n;  
printf("current address = %x \n",a);
a = a + 4;
printf("next address = %x \n",a);
}