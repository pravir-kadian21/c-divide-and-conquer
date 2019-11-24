#include<iostream>
using namespace std;

int searchrotatedarray(int *a,int sp,int ep,int key){
    if(sp>ep){
        return -1;
    }
    int mid = (sp+ep)/2;

    if(a[mid]==key){
        return mid;
    }
    if(a[mid]>a[sp]){
        if(a[mid]<key && key>a[sp]){
            return searchrotatedarray(a,sp,mid-1,key);
        }
        else{
            return searchrotatedarray(a,mid+1,ep,key);
        }
    }
    else{
        if(a[mid]<key && key<a[sp]){
            return searchrotatedarray(a,mid+1,ep,key);
        }
        else{
            return searchrotatedarray(a,sp,mid-1,key);
        }
    }
}

int main() {
    int n;
    cin>>n;
    int a[1000000005];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout << searchrotatedarray(a,0,n-1,key) << endl;
	return 0;
}
