#include <stdio.h>

int main() {
    printf("hello world");
    int c, i;

    c = getchar();
    for (i = 0; i < c != EOF; i++) {
        if (c != '0'){
            putchar(c);
        }

        c = getchar();
    }

    return 0;
}