#include <stdio.h>

int main() { 

 float bmi, weight, height;
 
 printf("Enter your weight in kg:\n");
 scanf("%f", &weight);
 printf("Enter your height in cm:\n");
 scanf("%f", &height);

 float metre = height / 100;

bmi = weight/(metre*metre);
printf("Weight: %f\n", weight);
printf("Height: %f\n", height);
printf("Your BMI: %f\n", bmi);

if (bmi < 18.5) {
    printf("Overview: Underweight");
}
else if (bmi >= 18.5 && bmi <=24.9) {
    printf("Overview: Normal weight");
}

else if (bmi >= 25 && bmi <= 29.9) {
    printf("Overview: Overweight");
} 
else if (bmi>= 30) {
    printf("Overview: Obesity");
}

}
