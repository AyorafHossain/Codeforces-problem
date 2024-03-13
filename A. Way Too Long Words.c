#include<stdio.h>
#include<string.h>

int main() {
    int len, T;
    char s[1000];

    // Input the number of test cases
    scanf("%d", &T);

    while (T--) {
        // Input the string
        scanf("%s", s);
        len = strlen(s);

        if (len > 10) {
            // Print abbreviation
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        } else {
            // Print the string as it is
            printf("%s\n", s);
        }
    }

    return 0;
}
