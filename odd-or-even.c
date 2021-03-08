#include <stdio.h>

int main() {
    int a, test;
 printf("Enter any Number\n");
 scanf("%d", &a);

 printf("Entered Number is %d\n" , a);

test =  a % 2;
if(test == 0) {
    printf("Entered Number is Even");
}
else {
    printf("Entered Number is Odd");
}

    return 0;
}
