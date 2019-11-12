#include<iostream>
using namespace std;

void printpivot(int a[100],int n){
	int si=0;
	int ei=n-1;

	while(si<=ei){

		int mi=(si+ei)/2;

		if(mi>0 && a[mi]>a[mi+1]){
			cout << "pivot element is present at the " << mi << " index" << endl;
			break;
		}

		if(mi<n-1 && a[mi-1]>a[mi]){
			cout << "pivot element is present at the " << mi-1 << " index" << endl;
			break;
		}

		if(a[si]>a[mi]){
			ei=mi-1;
		}

		else{
			si=mi+1;
		}
	}
}
int main(){

	int a[100];

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	printpivot(a,n);

	return 0;
}