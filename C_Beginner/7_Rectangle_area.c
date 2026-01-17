#include <stdio.h>

int main() {
    int l, b;
    float area;

    // Prompt user for input
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &l, &b);

    // Calculate area with float precision
    area = (float)l * b;

    // Display result with 2 decimal places
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}