#include <bits/stdc++.h>
using namespace std;


vector<int> arr(3);

void test(int val){
	if(val>arr[0]) arr[0]=val;
	sort(arr.begin(),arr.end());
}
int main(){
	string s;
	long long mx=0,ans=0;
	ifstream file("in.in");

	while(getline (file,s)){
		if(s=="") {
			ans=0;
			continue;
		}
		ans+= stoi(s);
		test(ans);

	}

	long long sum=0;
//	for(auto td:arr) cout << td << endl;
	for(auto d:arr) sum+=d;
	cout << sum << endl;
	return 0;
}
