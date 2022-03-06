#include <cstdio>
using namespace std;

int main() {
    int n, maxv, min, t;
    int R[3];
    scanf("%d %d %d", &n, &R[0], &R[1]);
    maxv = R[1] - R[0];
    min = R[0];
    if (min > R[1]) {
        min = R[1];
    }
    for (int i = 1; i < n - 1; i++) {
        scanf("%d", &R[2]);
        if (maxv < R[2] - min) {
            maxv = R[2] - min;
        }
        if (min > R[2]) {
            min = R[2];
        }
    }
    printf("%d\n", maxv);
}