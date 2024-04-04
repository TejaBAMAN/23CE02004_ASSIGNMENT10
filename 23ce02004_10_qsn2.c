#include<stdio.h>

struct str{
    int x;
    int y;
    char z;
};

union un{
    int a;
    int b;
    char c;
};

int main() {
struct str s;
union un u;
printf("the size of struct is : %d", sizeof(s) );
printf("\nthe size of union is : %d",sizeof(u));
  

  /*the union takes takes the size of largest elemental size
  while struct takes the size all elements included  */

  /*but why is the size of struct is 12 instead of 9 */



    return 0;
}
