#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch, c, u;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (!isalpha(ch)) {
        printf("\nPlease enter vaild alphabet only");

        return 0;
    }

    c = ch;

    u = toupper(ch);

    if (c == u) {
        printf("\nEntered alphabet was uppercase");
    } else {
        printf("\nEntered alphabet was lowercase");
    }
    
    return 0;
}
