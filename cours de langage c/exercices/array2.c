#include <stdio.h>
#include<stdlib.h>  
 
void main()
{  
 
int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j;    
 
printf("Enter the number of rows in first matrix: ");    
scanf("%d",&r1);
 
printf("Enter the number of columns in first matrix: ");    
scanf("%d",&c1);    
 
printf("Enter the first matrix: \n");    
 
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
 
printf("Enter the number of rows in second matrix: ");    
scanf("%d",&r2);
 
printf("Enter the number of columns in second matrix: ");    
scanf("%d",&c2);    
 
printf("Enter the second matrix: \n");    
 
for(i=0;i<r2;i++)    
{    
for(j=0;j<c2;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
 
if ((r1==r2) & (c1==c2))
{
 
for(i=0;i<r1;i++)    
{    
for(j=0;j<c2;j++)    
{    
c[i][j] = 0;
c[i][j] += a[i][j] * b[i][j];    
}   
}
 
printf ("Matrix after Addition:\n");
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
printf ("%d",c[i][j]);  
printf ("\n");
}
}
}
 
else
printf ("Addition not possible.");
}