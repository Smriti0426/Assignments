#include <stdio.h>

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, i, gcd, smallestDivisor = -1;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    int min = (num1 < num2) ? num1 : num2;

    for (i = 2; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            smallestDivisor = i;
            break;
        }
    }

    if (smallestDivisor != -1)
        printf("Smallest Common Divisor (other than 1) = %d\n", smallestDivisor);
    else
        printf("No common divisor other than 1\n");

    gcd = findGCD(num1, num2);
    printf("GCD = %d\n", gcd);

    return 0;
}