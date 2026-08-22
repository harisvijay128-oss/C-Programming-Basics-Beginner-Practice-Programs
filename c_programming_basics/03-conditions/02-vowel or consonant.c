#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (!isalpha(ch)) {
        printf("\nPleace enter valid alphabet only");

        return 0;
    }

    switch (ch) {
        case 'a': case 'A':
            printf("\n%c is vowel", ch);
            break;
        case 'e': case 'E':
            printf("\n%c is vowel", ch);
            break;
        case 'i': case 'I':
            printf("\n%c is vowel", ch);
            break;
        case 'o': case 'O':
            printf("\n%c is vowel", ch);
            break;
        case 'u': case 'U':
            printf("\n%c is vowel", ch);
            break;
        default:
            printf("\n%c is consonant", ch);
            break;
    }

    return 0;
}
