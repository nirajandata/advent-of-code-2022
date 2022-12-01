#include <bits/stdc++.h>
using namespace std;

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
		mx=max(ans,mx);
	}
	cout << mx << endl;
	return 0;
}
