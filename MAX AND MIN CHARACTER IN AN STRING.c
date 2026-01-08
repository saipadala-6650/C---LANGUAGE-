#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char maxChar, minChar;

    printf("Enter a word: ");
    scanf("%s", str);  

    maxChar = minChar = str[0];  
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] > maxChar)
            maxChar = str[i];
        if (str[i] < minChar)
            minChar = str[i];
    }

    printf("Maximum character: %c\n", maxChar);
    printf("Minimum character: %c\n", minChar);

    return 0;
}
