#include <stdio.h>

int main() {
  int a,b,c;
  a = 1;
  b = 13;
  c = 9;

if ( a > b && a > c) {
    printf("A is greatest among the 3 numbers");
}

else if( b > a && b > c)
{
    printf("B is greatest among the 3 numbers");
}
else if( c > a && c > b){
    printf("C is greatest among the 3 numbers");
}

    return 0;
}
