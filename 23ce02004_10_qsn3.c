#include <stdio.h>

struct employee
{
    int emp_ID;
    char emp_name[20];

    union empdetails
    {
        float hour_wage;
        double fixed_wage;

    } u;
};

int main()
{
    struct employee e[10];
    printf("enter the details of employee : \n ");
    int i = 0;
    while (i < 10)
    {

        printf("\nenter employee ID : ");
        scanf("%d", &e[i].emp_ID);
        printf("enter the name of employee : ");
        scanf("%s", e[i].emp_name);
        printf(" if hourly wage enter 1 , if fixed wage enter 2 . \n  ");
        int res;
        scanf("%d", &res);
        if (res == 1)
        {
            printf("enter hourly wage : ");
            scanf("%f", &e[i].u.hour_wage);
        }
        else
        {
            printf("enter fixed wage : ");
            scanf("%lf", &e[i].u.fixed_wage);
        }

        printf("do you want to terminate : ");
        int res1;
        scanf("%d", &res1);
        if (res1 == 1)
        {
            break;
        }
        i++;
    }
    int k;
    printf("enter the employee id you want to access : ");
    scanf("%d", &k);
    printf("\n\n");
    for (int j = 0; j <= i; j++)
    {
        if (e[j].emp_ID == k)
        {
            printf("%d\n%s\n", e[j].emp_ID, e[j].emp_name);
            if (e[j].u.fixed_wage == 0.0)
            {
                printf("hourly wage = %.2f", e[j].u.hour_wage);
            }
            else
            {
                printf("fixed wage = %.2lf", e[j].u.fixed_wage);
            }
        }
    }

    return 0;
}
