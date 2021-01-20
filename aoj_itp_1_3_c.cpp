#include <iostream>
using namespace std;

void swap(int& m,int& n){
    int t = m;
    m=n;
    n=t;
}

int main(){
    while(1){
        int x,y;
        cin >> x >> y ;
        if(x==0 && y==0) break;
        if(x>y){
            swap(x,y);
        }
        cout << x << " " << y <<  endl;
    }
}