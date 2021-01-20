#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int j = 0; j < n; j++) {
        scanf("%d", &a[j]);
    }

    for (int i = --n; i >= 0; i--) {
        printf("%d", a[i]);
        if (i != 0) {
            printf(" ");
        }
    }
    printf("\n");
}