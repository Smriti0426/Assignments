#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Matrix Addition\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse of 2x2 Matrix\n");
        printf("4. Magic Square Check\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // 1. Matrix Addition
        if (choice == 1) {
            int r, c, a[10][10], b[10][10], sum[10][10];

            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            printf("Enter first matrix:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);

            printf("Enter second matrix:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &b[i][j]);

            printf("Result:\n");
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    sum[i][j] = a[i][j] + b[i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
        }

        // 2. Saddle Point
        else if (choice == 2) {
            int r, c, a[10][10];

            printf("Enter rows and columns: ");
            scanf("%d %d", &r, &c);

            printf("Enter matrix:\n");
            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    scanf("%d", &a[i][j]);

            int found = 0;

            for (int i = 0; i < r; i++) {
                int min = a[i][0], col = 0;

                for (int j = 1; j < c; j++) {
                    if (a[i][j] < min) {
                        min = a[i][j];
                        col = j;
                    }
                }

                int k;
                for (k = 0; k < r; k++) {
                    if (a[k][col] > min)
                        break;
                }

                if (k == r) {
                    printf("Saddle Point = %d\n", min);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("No Saddle Point\n");
        }

        // 3. Inverse of 2x2 Matrix
        else if (choice == 3) {
            int a[2][2];
            float det;

            printf("Enter 2x2 matrix:\n");
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    scanf("%d", &a[i][j]);

            det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

            if (det == 0) {
                printf("Inverse not possible\n");
            } else {
                printf("Inverse Matrix:\n");
                printf("%.2f %.2f\n", a[1][1]/det, -a[0][1]/det);
                printf("%.2f %.2f\n", -a[1][0]/det, a[0][0]/det);
            }
        }

        // 4. Magic Square Check
        else if (choice == 4) {
            int n, a[10][10], sum = 0, temp, flag = 1;

            printf("Enter order of square matrix: ");
            scanf("%d", &n);

            printf("Enter matrix:\n");
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    scanf("%d", &a[i][j]);

            for (int j = 0; j < n; j++)
                sum += a[0][j];

            for (int i = 0; i < n; i++) {
                temp = 0;
                for (int j = 0; j < n; j++)
                    temp += a[i][j];
                if (temp != sum)
                    flag = 0;
            }

            for (int j = 0; j < n; j++) {
                temp = 0;
                for (int i = 0; i < n; i++)
                    temp += a[i][j];
                if (temp != sum)
                    flag = 0;
            }

            int d1 = 0, d2 = 0;
            for (int i = 0; i < n; i++) {
                d1 += a[i][i];
                d2 += a[i][n-i-1];
            }

            if (d1 != sum || d2 != sum)
                flag = 0;

            if (flag)
                printf("Magic Square\n");
            else
                printf("Not a Magic Square\n");
        }

    } while (choice != 5);

    return 0;
}