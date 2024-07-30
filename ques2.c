#include <stdio.h>

int main() {
    int n; // Number of integers
    int i; // Loop counter
    int sum = 0; // Sum of the integers
    float average; // Average of the integers

    // Ask the user for the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Declare an array to hold the integers
    int numbers[n];

    // Read the integers from the user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate the average
    average = (float)sum / n;

    // Print the result
    printf("The average is: %.2f\n", average);

    return 0;
}
