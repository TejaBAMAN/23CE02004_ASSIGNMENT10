#include <stdio.h>

union data
{
    int x;
    float y;
    char z;
};

int main()
{
    union data v1;
    v1.x=5;
    printf("%d",v1.x);
    v1.y=45.6;
    printf("\n%f",v1.y);
    v1.z='N';
    printf("\n%c",v1.z);

   /* doubt ? 
   printf("\n%d",v1.x);
    printf("\n%f",v1.y);*/

    
    return 0;
}
