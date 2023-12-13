//WAP to show difference between Structure and Union.
#include <stdio.h> 

struct Employee
{
  int age;  
  char Name[50];
  float Salary;
};

union Student 
{
  int age;  
  char Name[50];
  float Marks;
};

int main() 
{
  struct Employee emp;
  union Student st;
  printf(" The Size of Employee Structure = %d\n", sizeof (emp) );
  printf(" The Size of Student Union = %d\n", sizeof (st));

  return 0;
}