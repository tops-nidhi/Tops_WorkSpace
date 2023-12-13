#include <stdio.h>
int countWords(char *str) {
    int count = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
                count++;
        }
    }

    return count;
}

int main() {
    char str[100];
    printf("Enter String: ");
    gets(str);

    printf("Total number of words in the string: %d\n", countWords(str));

    return 0;
}