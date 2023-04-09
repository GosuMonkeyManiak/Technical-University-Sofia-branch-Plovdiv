#include <stdio.h>

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

int main()
{
    struct student s1 = { 380111, "Dimitar Kupanov", 1, "KST" };
    struct student s2 = { 380112, "Kristiqn Jelev", 1, "KST" };

    printInfo(s1);
    printf("\n");
    printInfo(s2);
}