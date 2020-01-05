#include<iostream>
using namespace std;
int main(){
	int i, j, k, n, b;
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	while(n>1){
		n--;
	for(i=0; i<n; i++){
		arr[i]=arr[i]^arr[i+1];
	}
	}
	cout<<arr[0];
}
