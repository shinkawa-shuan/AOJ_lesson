#include <cstdio>
using namespace std;

int main() {
    int n, maxv, min, t;
    int R[200000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &R[i]);
    }
    maxv = R[1] - R[0];
    min = R[0];
    for (int i = 1; i < n; i++) {
        if (maxv < R[i] - min) {
            maxv = R[i] - min;
        }
        if (min > R[i]) {
            min = R[i];
        }
    }
    printf("%d\n", maxv);
}