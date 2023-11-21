// WAP to find the  area of a rectangular prism
// Author: Nitin Kumar Pal
#include <stdio.h>
int main()
{
    int w, h, l;
    printf("Enter the width , height and length of the rectangular prism:\n");
    scanf("%d %d", &w, &h, &l);
    float area = 2 * ((w*l) + (h*l) + (h*w));

    printf("\nThe area of the rectangular prism is %.2f square units.\n\n", area);
    return 0;
}