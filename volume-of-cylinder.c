#include <stdio.h>

int main() {
    int radius, height;
    const double PI = 3.14;
    printf("Enter Radius\n");
    scanf("%d", &radius);

    printf("Enter Height\n");
    scanf("%d", &height);

    float Volume;
    Volume = PI * (radius*radius) * height;
     
    printf("Radius of Cylinder = %d\n", radius);
    printf("Height of Cylinder = %d\n", height); 
    printf("Volume of Cylinder is %f", Volume);

    return 0;
}
