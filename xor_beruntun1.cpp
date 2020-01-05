#include<iostream>
using namespace std;

bool duapangkat(int n){
	for (int i = 2; i <= n; i*2)
	{
		if(i == n) {
			return true;
		}
	}
	return false;
}

int main(){
	int i, j, k, n, b;
	cin>>n;
	int arr[n];
	int def_out;
	cin>>arr[0];
	def_out = arr[0];
	for(i=1; i<n; i++){
		cin>>arr[i];
		def_out ^= arr[i];
		
	}

	if(n == 1){
		cout << arr[0] <<endl;

	}else if(n == 2){
		int out = arr[0]^arr[1];
		cout << out << endl;

	}else if(n > 2 && duapangkat(n-1)){
		int out = arr[0]^arr[(n-1)];
		cout << out << endl;

	}else if(duapangkat(n)){
		cout << def_out << endl;

	}else if(n%2 == 0){
		int out = arr[0]^arr[1]^arr[n-2]^arr[n-1];
		cout << out << endl;

	}else{
		int out = arr[0]^arr[(n/2)-1]^arr[(n/2)+1]^arr[n-1];
		cout << out << endl;
	}

}
