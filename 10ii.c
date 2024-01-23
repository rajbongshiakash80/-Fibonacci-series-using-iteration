#include <stdio.h>

// Function to display Fibonacci series using iteration
void displayFibonacciIterative(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series using Iteration: ");

    for (int i = 0; i < n; ++i) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;

    // Take input from the user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Display Fibonacci series using iteration
    displayFibonacciIterative(n);

    return 0;
}