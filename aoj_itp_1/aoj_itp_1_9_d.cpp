#include <cstdio>
#include <string>
using namespace std;

int main() {
    char str[1000];
    int num;
    char f[8];
    int a, b;
    scanf(" %s", &str);
    scanf(" %d", &num);
    for (int k = 0; k < num; k++) {
        scanf(" %s %d %d", &f, &a, &b);
        if (f[2] == 'i') {
            for (int i = a; i < b + 1; i++) {
                printf("%c", str[i]);
            }
            printf("\n");
        } else if (f[2] == 'v') {
            for (int i = 0; i < ((b - a + 1) / 2); i++) {
                char tmp;
                tmp = str[a + i];
                str[a + i] = str[b - i];
                str[b - i] = tmp;
            }
        } else {
            char p[1000];
            scanf(" %s", &p);
            for (int i = a; i <= b; i++) {
                str[i] = p[i - a];
            }
        }
    }
    return 0;
}