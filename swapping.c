#include <stdio.h>

int main() {
    int a;
    a = 10;
/// Value of a 10
    int b;
    b = 5;
/// Value of b = 5
printf("Value of a before swapping %d\n", a);
/// Output a = 5
printf("Value of b before swapping %d\n", b);
    int c;

 c = a;
 // assiging value of a to c
 a = b;
 // assiging value of b to a
 b = c;
 // passing value of c to b (c = a)

printf("Value of a after swapping %d\n", a);
/// Output a = 5
printf("Value of b after swapping %d", b);
/// Output b = 10


    return 0;
}
