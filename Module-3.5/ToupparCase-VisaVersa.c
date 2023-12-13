#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, 20, stdin);
    // fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i]))
            sentence[i] = toupper(sentence[i]);
        else if (isupper(sentence[i]))
            sentence[i] = tolower(sentence[i]);
    }

    printf("Sentence after replacing characters: %s", sentence);

    return 0;
}