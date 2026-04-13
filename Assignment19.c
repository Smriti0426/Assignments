#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender;
    char doj[15];
    float salary;
};

void countEmployees(int n) {
    printf("Total number of employees = %d\n", n);
}

void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0;

    for (int i = 0; i < n; i++) {
        if (emp[i].gender == 'M' || emp[i].gender == 'm')
            male++;
        else if (emp[i].gender == 'F' || emp[i].gender == 'f')
            female++;
    }

    printf("Male employees = %d\n", male);
    printf("Female employees = %d\n", female);
}

void salaryAbove10k(struct EMPLOYEE emp[], int n) {
    printf("Employees with salary more than 10000:\n");

    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000) {
            printf("%s\n", emp[i].name);
        }
    }
}

void asstManager(struct EMPLOYEE emp[], int n) {
    printf("Employees with designation 'Asst Manager':\n");

    for (int i = 0; i < n; i++) {
        if (strcmp(emp[i].designation, "Asst Manager") == 0) {
            printf("%s\n", emp[i].name);
        }
    }
}

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    countEmployees(n);
    countGender(emp, n);
    salaryAbove10k(emp, n);
    asstManager(emp, n);

    return 0;
}