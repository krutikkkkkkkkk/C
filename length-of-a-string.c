#include <stdio.h>
#include <string.h>

int main() { 
    char a[100];
    printf("Enter a string\n");
 scanf("%s", &a);

    int length;
    length = strlen(a);

    printf("Length of Entered string is %d", length);
    return 0;
}
