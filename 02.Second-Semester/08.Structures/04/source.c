#include <stdio.h>

struct person
{
    char* firstName;
    char* middleName;
    char* lastName;
};

struct student
{
    struct person personalInfo;
    unsigned int facultyNumber;
    unsigned int course;
    unsigned int age;
};

struct student readStudentFromIn()
{
    struct student newStudent;
    
    printf("Enter first, middle and last name each on new line:\n");
    scanf("%s", newStudent.personalInfo.firstName);
    scanf("%s", newStudent.personalInfo.middleName);
    scanf("%s", newStudent.personalInfo.lastName);
    
    printf("Enter faculty number, course, age each on new line:\n");
    scanf("%d", &newStudent.facultyNumber);
    scanf("%d", &newStudent.course);
    scanf("%d", &newStudent.age);
    
    return newStudent;
}

void printfStudentInfo(struct student student1)
{
    printf("\nPersonal Info:\n");
    printf("\tFirst name: %s\n", student1.personalInfo.firstName);
    printf("\tMiddle name: %s\n", student1.personalInfo.middleName);
    printf("\tLast name: %s\n", student1.personalInfo.lastName);
    
    printf("Faculty number: %d\n", student1.facultyNumber);
    printf("Age: %d\n", student1.age);
    printf("Course: %d\n", student1.course);
}

int main()
{
    struct student student1;
    
    student1 = readStudentFromIn();
    
    printfStudentInfo(student1);
}