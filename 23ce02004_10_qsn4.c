#include <stdio.h>

union arr
{
    int a[10];
    float b[10];
    char c[10];
};

int main()
{
    union arr u;

printf("\nenter the values of char array : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &u.c[i]);
    }

    printf("\n\naccessing these values : \n");
    printf("%s",u.c);

    

 printf("\nenter the values of float  array : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &u.b[i]);
    }

    printf("\n\naccessing these values : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.2f ", u.b[i]);
    }

   printf("\nenter the values of integer array : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &u.a[i]);
    }

    printf("\n\naccessing these values : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", u.a[i]);
    }


 /*changing the order of arrays access is causing chaos */

    return 0;
}
