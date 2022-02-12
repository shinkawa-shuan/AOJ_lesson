#include <cstdio>

int main() {
    int n, t;
    scanf(" %d", &n);
    int a[100];
    for (int i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        (i != n - 1) ? printf("%d ", a[i]) : printf("%d\n", a[i]);
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
            (k > 0) ? printf(" %d", a[k]) : printf("%d", a[k]);
        }
        printf("\n");
    }
}