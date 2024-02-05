#include <stdio.h>

// FORMULA = n!=n×(n−1)×(n−2)×…×2×1
// EXAMPLE = 5!=5×4×3×2×1=120

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1; // Base case: 0! and 1! are both 1
    }
    else
    {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main()
{
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a non-negative integer.\n");
    }
    else
    {
        printf("Factorial of %d = %llu\n", number, factorial(number));
    }

    return 0;
}