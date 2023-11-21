// WAP to convert minutes into seconds and hours
#include <stdio.h>
int main()
{
    int mins, secs, hrs;
    printf("Enter the number of minutes: ");
    scanf("%d", &mins);
    secs = (mins * 60);
    hrs = mins / 60;
    printf("\nTotal: %dhrs  %dmin  %dsec.", hrs, mins, secs);
    return 0;
}