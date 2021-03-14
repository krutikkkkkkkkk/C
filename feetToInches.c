#include <stdio.h>

int main() {
    float feet,inches;

printf("Enter Length in feet\n");
scanf("%f", &feet);

inches = feet * 12;
printf("%f feet = %f inches\n",feet,inches);

    return 0;
}
