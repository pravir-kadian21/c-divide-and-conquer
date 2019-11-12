#include <iostream>
using namespace std;

void dnfalgo(int a[1000],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(a[mid]==1){
            mid++;
        }
        else if(a[mid]==2){
            swap(a[mid],a[high]);
            high--;
        }
        else{
            swap(a[mid],a[low]);
            mid++;
            low++;
        }
    }
}
int main() {
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dnfalgo(a,n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
