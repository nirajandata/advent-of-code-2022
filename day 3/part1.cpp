#include <bits/stdc++.h>
using namespace std;

int main(){
	long long sum=0;
	ifstream file("ad3.in");
	string s;
	while(getline(file,s)){
		vector<int> m1(58),m2(58);
		int n=s.size();
		for(int i=0;i<n;i++){
			if(i<n/2) m1[s[i]-'A']++;
			else m2[s[i]-'A']++;
		}
		int val=0;
		for(int i=0;i<58;i++){
			if(m1[i] && m2[i]){
				val=i;	
				break;
			}
		}
		 sum+=(val<26?val+27:val-31);
	}
	cout << sum << endl;
	return 0;
}
