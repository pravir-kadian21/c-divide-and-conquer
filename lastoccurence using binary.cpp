#include <iostream>
using namespace std;

int lastoccurence(int a[1000],int n,int key){
    int sp=0;
    int ep=n-1;
    int ans = -1;
    while(sp<=ep){
        int mp=(sp+ep)/2;
        if(a[mp]==key){
            ans = mp;
            sp=mp+1;
        }
        if(a[mp]>key){
            ep=mp-1;
        }
        if(a[mp]<key){
            sp=mp+1;
        }
    }
    return ans;
}
int main() {
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;

    int ans = lastoccurence(a,n,key);
    cout << key << " found at " << ans << " index\n";

    return 0;
}
