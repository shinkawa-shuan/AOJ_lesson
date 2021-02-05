#include <cstdio>

int main() {
    char c;
    while ((c = getchar()) != EOF) {
        if (c >= 65 && c <= 90) {
            printf("%c", c + 32);
        } else if (c >= 97 && c <= 122) {
            printf("%c", c - 32);
        } else {
            printf("%c", c);
        }
    }
}