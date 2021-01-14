#include <cstdio>

void swap(int& x, int& y) {
    int t;
    t = x;
    y = t;
    x = y;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[--n];
    for (int j = 0; j < n; j++) scanf("%d ", &a[j]);
    for (int i = 0; i < --n; i++) {
        if (a[i] < a[i++]) {
            swap(a[i], a[i++]);
        }
        printf("%d ", a[i]);
    }
}