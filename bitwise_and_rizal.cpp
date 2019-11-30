#include<iostream>
using namespace std;
int i, j, k, t, n[10], q[10], a[200000],a_plot[200], l, r, hasil;
int main(){
	cin>>t;
	for(i=0; i<t; i++){
		cin>>n[i];
		for(j=0; j<n[i]; j++){
			cin>>a[j];
			if(j%1000==0) a_plot[j/1000] = a[j];
			a_plot[j/1000]&=a[j];
		}
		
		cin>>q[i];
		for(j=0; j<q[i]; j++){
			cin>>l;
			hasil= a[l-1];
			cin>>r;
				for(l; l%1000!=0; l++){
					hasil&=a[l-1];
                    if(hasil== 0) break;
				}
				for(l; l<(r-(r%1000)); l+=1000){
					hasil&=a_plot[l/1000];
                    if(hasil== 0) break;
				}
				for(l; l<=r; l++){
					hasil&=a[l-1];
                    if(hasil== 0) break;
				}
			
			cout<<hasil<<"\n";
		}
	}
	
}