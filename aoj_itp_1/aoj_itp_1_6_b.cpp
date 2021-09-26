#include <cstdio>

int main() {
    bool cards[4][13] = {false};
    int n;
    scanf("%d", &n);
    int i = 0;
    for (int i = 0; i < n; i++) {
        char suit;
        int num;
        scanf(" %c%d", &suit, &num);
        switch (suit) {
            case 'S':
                cards[0][--num] = true;
                break;
            case 'H':
                cards[1][--num] = true;
                break;
            case 'C':
                cards[2][--num] = true;
                break;
            case 'D':
                cards[3][--num] = true;
                break;
        }
    }
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < 13; k++) {
            if (cards[j][k] == false) {
                switch (j) {
                    case 0:
                        printf("S %d\n", k + 1);
                        break;
                    case 1:
                        printf("H %d\n", k + 1);
                        break;
                    case 2:
                        printf("C %d\n", k + 1);
                        break;
                    case 3:
                        printf("D %d\n", k + 1);
                        break;
                }
            }
        }
    }
}