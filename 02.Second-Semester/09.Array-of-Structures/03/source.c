#include <stdio.h>

#define N 2

struct student
{
    unsigned int facaultyNumber;
    char name[50];
    unsigned int course;
    char specialty[100]; 
};

void printInfo(struct student s1)
{
    printf("Facaulty number: %d\n", s1.facaultyNumber);
    printf("Name: %s\n", s1.name);
    printf("Course: %d\n", s1.course);
    printf("Specialty: %s\n", s1.specialty);
}

struct student readStudent()
{
    struct student newStudent;
    
    printf("Enter faculty number: ");
    scanf("%i", &newStudent.facaultyNumber);
    
    printf("Enter name: ");
    scanf("%s", newStudent.name);
    
    printf("Enter course: ");
    scanf("%i", &newStudent.course);
    
    printf("Enter specialty: ");
    scanf("%s", newStudent.specialty);
    
    return newStudent;
}

void printFiltedStudentByLetter(struct student students[], char letter)
{
    for (int i = 0; i < N; i++)
    {
        if (students[i].name[0] == letter)
        {
            printInfo(students[i]);
        }
    }
}

int main()
{
    struct student students[N];
    
    for (int i = 0; i < N; i++)
    {
        students[i] = readStudent();
    }

    fflush(stdin);

    char letter;

    scanf("%c", &letter);

    printFiltedStudentByLetter(students, letter);
}