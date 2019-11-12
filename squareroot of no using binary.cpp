#include <iostream>
using namespace std;

float squareroot(int n,int p){
    int sp=0;
    int ep=n;
    float ans;
    while(sp<=ep){
        int mp=(sp+ep)/2;
        if((mp*mp)==n){
            ans =mp;
            break;
        }
        if((mp*mp)>n){
            ep=mp-1;
        }
        if((mp*mp)<n){
            ans = mp;
            sp=mp+1;
        }
    }
    float inc = 0.1;
    for(int k=0;k<p;k++){
        while(ans*ans<=n){
            ans = ans + inc;
        }
        ans = ans - inc;
        inc = inc/10.0;
    }
    return ans;
    
}
int main() {
    int n;
    cin>>n;
    int p;
    cin>>p;
    float ans =squareroot(n,p);
    cout << ans << endl;

    return 0;
}
