#include<stdio.h>  
 
int maximum(int a[],int size)
{    
int max = a[0];    
int i=0;    
for(i=1;i<size;i++)
{
if(max < a[i])  
max = a[i];    
}  
return max;    
}
 
void main()
{ 	 
int i=0,max=0;    
int array[] ={9,52,77,635,889,679,6,54,78,34};
 
printf ("List of Numbers:\n");
for(i=0;i<10;i++)
{
printf ("%d",array[i]);
printf ("\n");
}
 
max = maximum(array,10);
printf("\nLargest Number is: %d",max);   
printf ("\n"); 
}