/*
WAP to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140
*/
#include <stdio.h>
int main()
{
    int maths;
    int phy;
    int chem;
    int total_marks;
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy);
    printf("\n");
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem);
    printf("\n");
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &maths);
    printf("\n");
    if (maths >= 65 && phy >= 55 && chem >= 50)
    {
        printf("The candidate is eligible.");
    }
    else if ((phy + chem + maths >= 190) || (phy + maths >= 140))
    {
        printf("The candidate is eligible.");
    }
    else
        {
            printf("The candidate is not eligible.");
        }
    return 0;
}