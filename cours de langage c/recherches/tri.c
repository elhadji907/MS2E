#include <stdio.h>
#include <stdlib.h>
 
void init_rand(int * tab, int t)
{
    while(--t>=0)
        tab[t] = rand();
}
 
void print(int * tab, int t)
{
    int i;
    for(i=0;i<t;i++)
        printf("%d ",tab[i]);
    printf("\n");
}
 
int compare(const void* pi1, const void* pi2)
{
    int i1 = *(int*)pi1;
    int i2 = *(int*)pi2;
 
    return (i1 < i2) ? -1 : (i1 > i2);
}
 
int main(void)
{
    int tab[5];
 
    srand(0);
 
    init_rand(tab,5);
    print(tab,5);
    qsort(tab,5,sizeof *tab,compare);
    print(tab,5);
 
    return 0;
}