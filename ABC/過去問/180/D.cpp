//GIVE ME AC!!!

#include <bits/stdc++.h>
using namespace std;

#define _GLIBCXX_DEBUG
#define ll long long

int main(){
    ll X,Y,A,B;
    cin >> X >> Y >> A >> B;

    ll pt=0;
    while(true){
        if (X > Y/A) break; //X*Aがoverflowする可能性があるから
        if (X*A >= X+B) break;
        if (A*X >= Y) break;
        X *= A;
        ++pt;
    }
    pt += (Y-X-1)/B;
    cout << pt << endl; 
}