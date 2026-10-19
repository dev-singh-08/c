#include <stdio.h>
#include "myconst.h" // Include the custom header file

int main() {
    printf("Constant Values:\n");
    printf("Pi (PI)           : %.5f\n", PI);
    printf("Euler's Number (E): %.5f\n", E);
    printf("Gravity (GRAVITY) : %.2f m/s^2\n", GRAVITY);
    
    return 0;
}