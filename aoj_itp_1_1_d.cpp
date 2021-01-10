#include <iostream>
using namespace std;

int main(){
    int S;
    cin >> S;
    cout << S/3600 << ":" << (S/60)%60 << ":" << S%60 << endl;
    return 0;

}

#include <iostream>
using namespace std;

int main(){
    int S;
    cin >> S;
    int h = S/3600;
    int m = (S/60)%60;
    int s = (S/3600)%60;
    cout << h << ":" << m << ":" << s << endl;
    return 0;

}