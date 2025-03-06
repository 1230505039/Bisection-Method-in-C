#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

/**
 * Function to evaluate the polynomial at a given point.
 * 
 * @param number - The x-value where the function is evaluated.
 * @param equation - The array of polynomial coefficients.
 * @param size - The number of terms in the polynomial.
 * @return The function result at x = number.
 */
double function(double number, double equation[], int size) {
    double result = 0.0;
    
    // Evaluating the polynomial using the given coefficients
    for (int i = 0; i < size; i++) {
        result += equation[i] * pow(number, size - i - 1);
    }

    return result;
}

int main() {
    double targetErrorRatio;
    
    // Asking user for the desired error ratio
    printf("Enter target error ratio: ");
    scanf("%lf", &targetErrorRatio);

    double topLimit, bottomLimit;
    
    // Asking user for the interval [a, b]
    printf("\nEnter top limit: ");
    scanf("%lf", &topLimit);
    printf("\nEnter bottom limit: ");
    scanf("%lf", &bottomLimit);

    int numberOfTerms;
    
    // Asking user for the number of terms in the polynomial
    printf("\nEnter number of terms: ");
    scanf("%d", &numberOfTerms);

    double equation[numberOfTerms];
    
    // Reading polynomial coefficients from user
    for (int i = 0; i < numberOfTerms; i++) {
        printf("Enter term %d: ", i + 1);
        scanf("%lf", &equation[i]);
    }

    // Checking if the given interval is valid for root finding
    if (function(topLimit, equation, numberOfTerms) * function(bottomLimit, equation, numberOfTerms) >= 0) {
        printf("Invalid interval! No root in [%lf, %lf]\n", bottomLimit, topLimit);
        return 1;  // Exit if no root exists in the given range
    }

    double errorRatio = 1.0;  // Initial error ratio
    int count = 0;  // Iteration counter
    bool flag = true;
    
    double midpoint;

    // Implementing the Bisection Method iteration
    do {
        count++;
        errorRatio = (topLimit - bottomLimit) / pow(2.0, count);
        midpoint = (topLimit + bottomLimit) / 2.0;

        double f_mid = function(midpoint, equation, numberOfTerms);
        double f_bottom = function(bottomLimit, equation, numberOfTerms);

        // Checking if we found an exact root
        if (f_mid == 0.0) {
            bottomLimit = midpoint;
            break;
        }
        // Checking which half contains the root and updating the limits
        else if (f_mid * f_bottom < 0) {
            topLimit = midpoint;  // Root is in the lower half
        } else {
            bottomLimit = midpoint;  // Root is in the upper half
        }
    } while (errorRatio > targetErrorRatio);  // Continue until the error is within the acceptable range

    // Printing the approximated root
    printf("%lf is root of equation.\n", bottomLimit);
    
    return 0;
}
