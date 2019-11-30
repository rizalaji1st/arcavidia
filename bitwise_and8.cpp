#include<iostream>
using namespace std;
int i, j, k, t, n[10], q[10], a[200000], l, r, hasil;
int main(){
	cin>>t;
	for(i=0; i<t; i++){
		cin>>n[i];
		for(j=0; j<n[i]; j++){
			cin>>a[j];
		}
		
		cin>>q[i];
		for(j=0; j<q[i]; j++){
			cin>>l;
			hasil= a[l-1];
			cin>>r;
			for(l; l<=r; l++){
				if(hasil==a[l]) continue;
				hasil&=a[l];
				if(hasil== 0) break;
			}
			cout<<hasil<<"\n";
		}
	}
	
}
