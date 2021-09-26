#include <iostream>
using namespace std;
int i = 1;

int main(){
    while(1){
        int x;
        cin >> x;
        if(x ==0) break;
        cout << "Case " << i << ": " << x << endl;
        i++;
    }

}