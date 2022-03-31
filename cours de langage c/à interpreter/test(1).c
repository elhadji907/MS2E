#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    // double bn = 1223.8;
    // int n = 1410065408;
    // int *a;
    // int v[3] = {2, 4, 6};
    // int m = 3;
    // int b = 12;
    // printf("next address a = %p \n", &a);
    // printf("next value a = %p \n", a);
    // printf("next address n = %p \n\n", &n);
    // a = &n;
    // printf("next address a = %p \n", &a);
    // printf("next value a = %p \n\n", a);
    // printf("next value *a = %d \n", *a);

    // //int v[3] = {2, 4, 6};
    // //a = a + 16;

    // a = a + 3;
    // int c = 14;

    // //printf("next address V = %p \n", &v);
    // //printf("next address V = %p \n", v);
    // //printf("next value V = %d \n\n", v[0]);
    // printf("current value *a= %d \n\n", *a);
    // printf("next valeur a = %p \n", a);
    // printf("next value *a = %d \n", *a);
    // printf("Size of variable a : %ld\n", sizeof(n));

    //-----------------------------------
    int y = 100;
    int x[] = {20, 25, 30};
    int *a;
    int **b;
    int *c;

    a = &x[0];
    b = &a;
    c = &y;

    printf("a  => %p\n", a);
    printf("&x[0] => %p\n\n", &x[0]);

    printf("b  => %p\n", b);
    printf("&a  => %p\n\n", &a);

    printf("*b  => %p\n", *b);
    printf("a  => %p\n\n", a);

    printf("**b  => %d\n", **b);
    printf("*a  => %d\n", *a);
    printf("x[0] => %d\n\n", x[0]);

    **b = **b + 1;
    printf("**b  => %d\n", **b);
    printf("*a  => %d\n", *a);
    printf("x[0] => %d\n\n", x[0]);

    *b = *b + 1;

    printf("**b  => %d\n", **b);
    printf("*a  => %d\n", *a);
    printf("x[1] => %d\n\n", x[1]);

    *b = *b - 9;

    printf("**b  => %d\n", **b);
    printf("*a  => %d\n", *a);
    printf("y => %d\n", y);
    printf("*c => %d", *c);

    //-----------------------------------
    // int n = 10;
    // int *a, *b;
    // a = (int *)malloc(4);
    // printf("current address = %p \n", a);
    // printf("current value = %d \n", *a);

    // b = (int *)calloc(n, sizeof(int));
    // printf("current address = %p \n", b);
    // printf("current value = %d \n", *b);
    // return 0;
}