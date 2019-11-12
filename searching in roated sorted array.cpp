#include <iostream>
using namespace std;

void searchinrotated(int n,int *a,int key){
    int sp=0;
    int ep=n-1;
    int mid=(sp+ep)/2;
    if(a[mid]<=key && a[ep]>=key){
        sp=mid+1;
    }
    else{
        ep=mid-1;
    }
    while(sp<=ep){
        mid=(sp+ep)/2;
        if(a[mid]==key){
            cout << "found at " << mid << " index" << endl;
            break;
        }
        if(a[mid]>key){
            ep=mid-1;
        }
        if(a[mid]<key){
            sp=mid+1;
        }
    }
    if(sp>ep){
        cout << "not found" << endl;
    }
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    searchinrotated(n,a,key);
    return 0;
}
