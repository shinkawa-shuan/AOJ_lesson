#include <cstdio>

int main() {
    while (1) {
        int H, W;
        scanf("%d %d", &H, &W);
        if (H == 0 && W == 0) break;
        for (int i = 1; i <= H; i++) {
            for (int j = 1; j <= W; j++) {
                if ((i + j) % 2 == 0) printf("%c", '#');
                else printf("%c", '.');
            }
            printf("\n");
        }
        printf("\n");
    }
}