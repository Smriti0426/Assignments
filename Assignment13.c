#include <stdio.h>

int main() {
    int n, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed digits: ");

    if (n == 0)
        printf("0");

    while (n != 0) {
        digit = n % 10;
        printf("%d", digit);
        n = n / 10;
    }

    return 0;
}