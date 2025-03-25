#include <stdio.h>
#include <math.h>


// This is where you add the function calculate_hypotenuse

float calculate_hypotenuse(float base, float height){
    float hypotenuse = 0;

    //printf("input base: %.2f, then squared: %.2f\n", base, pow(base, 2));
    //printf("input height: %.2f, then squared: %.2f\n", height, pow (height, 2));

    float total = pow(base, 2) + pow(height, 2);
    //printf("Sum of base and height squares: %.2f\n", total);

    hypotenuse = sqrt(total);

    return hypotenuse;
}

int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}