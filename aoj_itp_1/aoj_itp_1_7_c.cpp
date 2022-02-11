#include <cstdio>

int main() {
    int r, c;
    scanf(" %d %d", &r, &c);
    int table[101][101] = {};  // int table[r + 1][c + 1] = {};だとエラー
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf(" %d", &table[i][j]);
            table[i][c] += table[i][j];
            table[r][j] += table[i][j];
            table[r][c] += table[i][j];
        }
    }
    for (int i = 0; i < r + 1; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", table[i][j]);
        }
        printf("%d\n", table[i][c]);
    }
    return 0;
}