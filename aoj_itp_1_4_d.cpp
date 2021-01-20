#include <iostream>
using namespace std;

int main (){
    int a,n,min=1000000,max=-1000000;
    long sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a ;
        if(a>=max)max=a;
        if(a<=min)min=a;
        sum += a;
    }
    cout << min << " " << max << " " << sum << endl;
}