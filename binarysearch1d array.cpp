#include <iostream>
using namespace std;

void printkeybybinary(int a[1000],int n,int key){
    int sp=0,ep=n-1;
    while(ep>=sp){
        int mp = (sp+ep)/2;
        if(a[mp]==key){
            cout << key << " found at " << mp << " index" << endl;
            break;
        }
        if(a[mp]<key){
            sp=mp+1;
        }
        if(a[mp]>key){
            ep=mp-1;
        }
    }
    if(sp>ep){
        cout << key << " not found" << endl;
    }
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

    printkeybybinary(a,n,key);
    return 0;
}
