// WAP to Accept 5 names from user at run time.
#include <stdio.h>
int main()
{
    char name[5][20];
    int i;
    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++){
        scanf("%s", name[i]);
    }
    printf("Names are:\n");
    for (i = 0; i < 5; i++){
        printf("%s\n", name[i]);
    }
    return 0;
}        