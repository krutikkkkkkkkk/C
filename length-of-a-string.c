#include <stdio.h>
#include <string.h>

int main(void) { 
    char a[100];
    printf("Enter a string\n");
 scanf("%s", &a);
   printf("Entered string: %s\n", a);
    int length;
    length = strlen(a);
 
    printf("Length of Entered string is %d", length);
    return 0;
}
