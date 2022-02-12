#include <math.h>

#include <cstdio>

bool Prime(int x) {
    if (x == 2)
        return true;
    else if (x < 1 || x % 2 == 0) {
        return false;
    } else {
        for (int i = 3; i <= (int)sqrt(x); i += 2) {  // i+2にしたらバグった
            if (x % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n, tmp;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &tmp);
        if (Prime(tmp)) count++;
    }
    printf("%d\n", count);
}