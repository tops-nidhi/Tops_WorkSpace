#include <stdio.h>
int main()
{
    int i, j;
    int ch = 65;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++){
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}