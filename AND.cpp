#include <bits/stdc++.h>

using namespace std;

long AND(vector<int> calorie) {
    long sum = 0;
    int clr = calorie.size()-2, s = 0;

    while(calorie.size()!=1){
        int y = calorie[0]&calorie[1];
        if(y == 0)sum++;
        calorie.push_back(y);
        calorie.erase(calorie.begin());
        if(clr==s){
            calorie.erase(calorie.begin());
            clr--;
            s = 0;
        }else s++;
    }
    
    return sum;
}

int main(){
    vector<int> vec;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
	int tmp;
	scanf("%d",&tmp);
	vec.push_back(tmp);
    }
    cout<<AND(vec)<<endl;
    return 0;
}
