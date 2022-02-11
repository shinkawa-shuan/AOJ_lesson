#include <string.h>

#include <cstdio>

class dice {
   public:
    int num[6];
    int t;

    void set(int s1, int si);
    void move(char way);
    void show();
};

void dice::set(int s1, int si) { num[s1] = si; }

void dice::show() { printf("%d\n", num[0]); }

void dice::move(char way) {
    if (way == 'N') {
        t = num[0];
        num[0] = num[1];
        num[1] = num[5];
        num[5] = num[4];
        num[4] = t;
    } else if (way == 'S') {
        t = num[0];
        num[0] = num[4];
        num[4] = num[5];
        num[5] = num[1];
        num[1] = t;
    } else if (way == 'W') {
        t = num[0];
        num[0] = num[2];
        num[2] = num[5];
        num[5] = num[3];
        num[3] = t;
    } else {
        t = num[0];
        num[0] = num[3];
        num[3] = num[5];
        num[5] = num[2];
        num[2] = t;
    }
}

int main() {
    dice d1;
    int n[6];
    char w[100];
    int w_len;
    for (int i = 0; i < 6; i++) {
        scanf(" %d", &n[i]);
        d1.set(i, n[i]);
    }
    scanf(" %s", &w);
    w_len = strlen(w);
    for (int i = 0; i < w_len; i++) {
        d1.move(w[i]);
    }
    d1.show();
}