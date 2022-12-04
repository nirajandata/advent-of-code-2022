#include <bits/stdc++.h>
using namespace std;

int main(){
	long long sum=0;
	ifstream file("ad3.in");
	string s;
	vector<vector<int>> mp(58,vector<int>(3));
	int count=0;
	while(getline(file,s)){
		if(!(count%3)){
			count=0;
			for(int i=0;i<58;i++)
				mp[i][0]=0,mp[i][1]=0,mp[i][2]=0;
		}

		int n=s.size();
		for(int i=0;i<n;i++){
			mp[s[i]-'A'][count]++;
		}
		int val=0;
		if(count==2){
			for(int i=0;i<58;i++){
				if(mp[i][0] && mp[i][1] && mp[i][2]) {
					val=i;
					break;
				}
			}
		 sum+=(val<26?val+27:val-31);
		}
		 count++;
	}
	cout << sum << endl;
	return 0;
}
