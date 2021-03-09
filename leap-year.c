#include <stdio.h>

int main() {
    int year, leapYear;
 printf("Enter Any Year\n");
 scanf("%d", &year);

 printf("Entered Year is %d\n" , year);

leapYear =  year % 4;
if(leapYear == 0) {
    printf("Entered Year is a Leap Year");
}
else {
    printf("Entered Year is not a Leap Year");
}

    return 0;
}
