// 三項演算子使わないときのメモリ

#include <cstdio>

int main() {
    int n, t;
    scanf(" %d", &n);
    int a[100];
    for (int i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d ", a[i]);
        } else {
            printf("%d\n", a[i]);
        }
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[i]) {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
        for (int k = 0; k < n; k++) {
            if (k > 0) {
                printf(" %d", a[k]);
            } else {
                printf("%d", a[k]);
            }
        }
        printf("\n");
    }
}