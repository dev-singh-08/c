#include <stdio.h>

// Macro to find the maximum of two values using the ternary/conditional operator
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int main() {
    // Testing with integer values
    int int1 = 15, int2 = 42;
    printf("Integer Comparison:\n");
    printf("MAX(%d, %d) = %d\n\n", int1, int2, MAX(int1, int2));

    // Testing with float values
    float float1 = 12.5f, float2 = 8.75f;
    printf("Float Comparison:\n");
    printf("MAX(%.2f, %.2f) = %.2f\n", float1, float2, MAX(float1, float2));

    return 0;
}