#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int H,W;
    while(1){
        cin >> H >> W ;
        if(H==0&&W==0) break;
        for(int j=1;j<=W;j++){
           printf("%c",'#');
        }
        printf("\n");
        for(int i=1;i<=H-2;i++){
            printf("#");
            for(int j=1;j<=W-2;j++){
                printf("%c",'.');
            }
            printf("#\n");
        }
        for(int j=1;j<=W;j++){
           printf("%c",'#');
        }
        printf("\n\n");
    }
}