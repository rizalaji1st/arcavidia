#include<iostream>
using namespace std;
int main(){
	long long int a,b ;
	cin >> a;
	cin >> b;
	if(b==1) cout<<a<<endl;
	else if((a%2==1)&&(b%2==1)) cout<<"1\n";
	else if((a%2==1)&&(b%2==0)) cout<<"1\n";
	else if((a%2==0)&&(b%2==1)) cout<<"0\n";
	else cout<<"0\n";
}
