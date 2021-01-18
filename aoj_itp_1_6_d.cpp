#include <cstdio>

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    int a[n][m], b[m], c[n] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf(" %d", &a[i][j]);
        }
    }
    for (int k = 0; k < m; k++) {
        scanf(" %d", &b[k]);
    }
    for (int u = 0; u < n; u++) {
        for (int v = 0; v < m; v++) {
            c[u] += a[u][v] * b[v];
        }
    }
    for (int w = 0; w < n; w++) {
        printf("%d\n", c[w]);
    }
}