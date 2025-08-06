#include <stdio.h>
int main()
{
    //data
    char name[10] , gender;
    int age;
    float gpa;

    //input
    printf("Enter Name = ");
    scanf("%s",&name);
    printf("Enter age = ");
    scanf("%d",&age);
    printf("Enter gender = ");
    scanf(" %c",&gender);
    printf("Enter gpa = ");
    scanf("%f",&gpa);

    //output
    printf("-----------------------------------\n");
    printf("student name = %s\n",name);
    printf("student gender = %c\n",gender);
    printf("student age = %d\n",age);
    printf("student gpa = %.2f\n",gpa);

    return 0;
}