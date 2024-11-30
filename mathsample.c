#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double radius = 5.0;
    double circumference, area;

    // Calculate circumference and area of a circle
    circumference = 2 * M_PI * radius;
    area = M_PI * radius * radius;

    printf("For a circle with radius %.2f:\n", radius);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
