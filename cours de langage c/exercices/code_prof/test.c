#include <stdio.h>
#include <stdint.h>

int main()
{
    int n = 10;
    int *a;
    printf("next address a = %p \n", &a);
    printf("next value a = %p \n", a);
    printf("next address n = %p \n\n", &n);
    a = &n;
    printf("next address a = %p \n", &a);
    printf("next value a = %p \n\n", a);

    int v[3] = {2, 4, 6};

    printf("next address V = %p \n", &v);
    printf("next address V = %p \n", v);
    printf("next value V = %d \n\n", v[0]);
    printf("current value *a= %d \n\n", *a);
    a = a + 5;
    printf("next valeur a = %p \n", a);
    printf("next value *a = %d \n", *a);
    return 0;
}