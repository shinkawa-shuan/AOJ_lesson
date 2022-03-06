// バブルソート
#include <cstdio>

int main() {
    int n, t;
    int count = 0;
    int a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
                count++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", a[i]);
    }
    printf("%d", a[n - 1]);
    printf("\n%d\n", count);
}