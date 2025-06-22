#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[] = "Md. Tareq Zaman, Part-3,2011";
    int letters = 0, digits = 0, others = 0, words = 0;
    
    char letterArr[100], digitArr[100], otherArr[100];
    int l = 0, d = 0, o = 0;

    int inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isalpha(ch)) {
            letters++;
            letterArr[l++] = ch;
            if (!inWord) {
                words++;
                inWord = 1;
            }
        } else if (isdigit(ch)) {
            digits++;
            digitArr[d++] = ch;
            inWord = 0;
        } else {
            others++;
            otherArr[o++] = ch;
            if (isspace(ch) || ch == ',' || ch == '-') {
                inWord = 0;
            }
        }
    }

    // Null-terminate the arrays
    letterArr[l] = '\0';
    digitArr[d] = '\0';
    otherArr[o] = '\0';

    // Output the results
    printf("Original String: \"%s\"\n", str);
    printf("Number of Words: %d\n", words);
    printf("Number of Letters: %d\n", letters);
    printf("Number of Digits: %d\n", digits);
    printf("Number of Other Characters: %d\n", others);

    printf("\nSeparated Characters:\n");
    printf("Letters: %s\n", letterArr);
    printf("Digits: %s\n", digitArr);
    printf("Others: %s\n", otherArr);

    return 0;
}
