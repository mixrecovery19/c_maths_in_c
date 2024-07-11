#include <stdio.h>
#include <math.h>

#define TOLERANCE 0.01
//system of linear equations 2x + 3y=7/4x-y=5 to change fueling modes for educational purposes only/
int main() {    
    double a1 = 2, b1 = 3, c1 = 7;
    double a2 = 4, b2 = -1, c2 = 5;
    
    double multiplier = 3;
    
    double a2_new = a2 * multiplier;
    double b2_new = b2 * multiplier;
    double c2_new = c2 * multiplier;
    
    double a_sum = a1 + a2_new;
    double b_sum = b1 + b2_new;
    double c_sum = c1 + c2_new;
    
    double x = c_sum / a_sum;
    
    double y = (c1 - a1 * x) / b1;

    double sum = x + y;

    
    printf("The solution is: x = %.2lf, y = %.2lf\n", x, y);

    if (fabs(x - 1.57) < TOLERANCE && fabs(y - 1.29) < TOLERANCE) {
        printf("Enter Race Mode\n");
    } else {
        printf("Enter Wet Weather Mode\n");
    }

    return 0;
}