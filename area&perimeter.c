#include <stdio.h>

// Define macros for area and perimeter
#define AREA(l, b) ((l) * (b))
#define PERIMETER(l, b) (2 * ((l) + (b)))

int main() {
    float length, breadth;

    // Read length and breadth from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate and display results using the macros
    printf("Area of the rectangle: %.2f\n", AREA(length, breadth));
    printf("Perimeter of the rectangle: %.2f\n", PERIMETER(length, breadth));

    return 0;
}