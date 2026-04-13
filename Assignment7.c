#include <stdio.h>
#include <string.h>

struct student
{
    char name[10];
    int rollno;
    float marks1;
    float marks2;
    float marks3;
};

int main()
{
    int n;

    printf("Enter number of students : ");
    scanf("%d",&n);

    struct student s[n];
    float result[n];

    for(int i=0;i<n;i++)
    {
    printf("Enter name, roll and marks of 3 subjects : ");
    scanf("%s %d %f %f %f", s[i].name, &s[i].rollno, &s[i].marks1,&s[i].marks2,&s[i].marks3);
    printf("Name: %s\nRoll: %d\n", s[i].name, s[i].rollno);
    }

    for(int i=0;i<n;i++)
    {
    result[i]= (s[i].marks1 + s[i].marks2 + s[i].marks3)/3.0;
    printf("Result = %f\n",result[i]);
    }

    
    return 0;
}