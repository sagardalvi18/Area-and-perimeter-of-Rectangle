
// Name-Sagar Ravindra Dalvi
//PRN- 2503033111372L007
#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f\n", 
    perimeter);

    return 0;
}
