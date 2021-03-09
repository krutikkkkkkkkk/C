#include <stdio.h>

int main() {
    int number,i;

 printf("Enter the number till which you want the square table\n");
 scanf("%d", &number);
for(i = 1; i<=number; i++) {

    int square= i * i;
    printf("%d x %d = %d\n",i,i,square);
}  
    return 0;
}
