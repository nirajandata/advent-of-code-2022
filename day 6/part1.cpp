#include <bits/stdc++.h>
using namespace std;

int pos=0;
bool present (vector<int> &v,char c){
	int m=c-'a';
	for(int i=0;i<v.size();i++){
		if(m==v[i]){
			pos=i+1;
			return true;
		}

	}
	return false;
}
int main(){
	string s;
	cin>>s;
	vector<int> po;
	for(int i=0;i<(int) s.size();i++){
		if(po.size() && present(po,s[i])){
			po.erase(po.begin(),po.begin()+pos);
		}
		if(po.size()==4){
			cout << i << endl;
			break;
		}
		po.push_back(s[i]-'a');
	}
	return 0;
}
