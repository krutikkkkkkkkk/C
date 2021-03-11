#include <stdio.h>

int main(void) {

    int numOfDays,months,remainingDays;

printf("Enter Number of Days\n");
scanf("%d", &numOfDays);

months=numOfDays/30;
remainingDays=numOfDays%30;

printf("Entered Number of Days = %d\n Number of months can be made=  %d\n Remaining Days = %d",numOfDays,months,remainingDays);
    return 0;
}
