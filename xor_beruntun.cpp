#include<iostream>
using namespace std;
int main(){
	int i, j, k, n, hasil=0, dua_pangkat;
	int plot[8][8]={1,1,1,1,1,1,1,1, 1,0,0,0,0,0,0,0, 1,1,0,0,0,0,0,0, 1,0,1,0,0,0,0,0, 1,1,1,1,0,0,0,0, 1,0,0,0,1,0,0,0, 1,1,0,0,1,1,0,0, 1,0,1,0,1,0,1,0};
	cin>>n;
	for(i=1; i<=n; i*=2){
		dua_pangkat = i;
	}
	int input[n], jenis=n%8, banyak;
	if(n%8==0){
		banyak = (n%dua_pangkat)/8;
	}
	else banyak = ((n%dua_pangkat)+(8-n%8))/8;
	for(i=0; i<n; i++){
		cin>>input[i];
		hasil^=input[i];
	}
	if(n==1)hasil = input[0];
	else if(n==dua_pangkat) hasil = hasil;
	else{
		hasil = 0;
		for(i=0; i<banyak; i++){
			for(j=0; j<8; j++){
				if(plot[jenis][j]==1) hasil^=input[i*8 + j];
			}
		}
		for(i=0; i<banyak; i++){
			for(j=0; j<8; j++){
				if(plot[jenis][j]==1) hasil^=input[i*8 + j+ dua_pangkat];
			}
		}
	}
	cout<<hasil<<endl;
}
