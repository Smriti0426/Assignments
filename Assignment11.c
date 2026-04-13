#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Square root
    printf("Square Root = %.2f\n", sqrt(n));

    // Square
    printf("Square = %d\n", n * n);

    // Cube
    printf("Cube = %d\n", n * n * n);

    // Prime check
    if (n <= 1)
        isPrime = 0;
    else {
        for (i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Number is Prime\n");
    else
        printf("Number is Not Prime\n");

    // Factorial
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %lld\n", fact);

    // Prime factors
    printf("Prime Factors: ");
    int temp = n;
    for (i = 2; i <= temp; i++) {
        while (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }

    return 0;
}