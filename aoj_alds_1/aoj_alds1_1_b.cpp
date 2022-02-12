#include <cstdio>

int main() {
    int x, y;
    scanf(" %d %d", &x, &y);
    int tmp = 1;
    while (tmp != 0) {
        if (x > y) {
            tmp = x % y;
            x = y;
            y = tmp;
        } else if (x < y) {
            tmp = x;
            x = y;
            y = tmp;
        } else {
            break;
        }
    }
    printf("%d\n", x);
}