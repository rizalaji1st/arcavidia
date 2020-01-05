#include <bits/stdc++.h>

using namespace std;

long prim(vector<int> vec, int k){
  long sum = 0;
  for(int i=0;i<vec.size();i++){
    int tmp = k/vec[i];
    for(int j=i-1;j>=0;j--){
      tmp -= k/(vec[i]*vec[j]);
    }
    sum += tmp;
  }
  return sum;
}

int main(){
    vector<int> vec;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
	    int tmp;
	    cin>>tmp;
	    vec.push_back(tmp);
    }
    int k;
    cin>>k;

    cout<<prim(vec, k)<<endl;
    return 0;
}