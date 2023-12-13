// WAP to accept 5 students name and store it in array using function
#include<stdio.h>
#include<string.h>
    char name[5][20];
    int i;
int student()
{
    for(i=0;i<5;i++)
    {
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",name[i]);
    }
    }
void display_student()
{
    for(i=0;i<5;i++)
    {
        printf("\n%d student name is: %s", i+1, name[i]);
    }
}
int main()
{
    student();
    display_student();
    return 0;
}