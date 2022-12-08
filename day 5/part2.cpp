#include <bits/stdc++.h>
using namespace std;

string num="0123456789", paren="[] ";

vector<vector<int>> ship;

void change(const int &po,const int &a, const int &b){
	int count=0;
	for(int i=po;i>=0 ;i--){
		ship[a].insert(ship[a].begin(),ship[b][i]);
		count++;
	}
//	for(auto d:ship[a]) cout << char('A'+d) << " " ;
//	cout << a+1 << endl;
	ship[b].erase(ship[b].begin(),ship[b].begin()+count);
//	for(auto d:ship[b]) cout << char('A'+d) << " " ;
//	cout << b+1 << endl;
}
array<int,3> threeValue(const string &c){
	array<int,3> ans;
	int count=0,trigger=0,n=c.size();
	string buffer="";
	for(int i=0;i<=n;i++){
		if(i<n && num.find(c[i])!=-1 ){
			buffer+=c[i];	
			trigger=1;
		}
		else if(trigger){
			ans[count]=stoi(buffer);
			buffer="",count++;
			trigger=0;
		}
	}
	return ans;
}
int main(){
	string s;
	vector<string> load;
	int count=2,n=0,flag=1;
	while(getline(cin,s)){

//		cout << s << endl;
		if(s[1]=='1') flag=0;

		if(flag){
			load.push_back(s);
			continue;
		}		
		if(count>0){
		 if(count==2){
			int sp=0; 
			string buffer="";
			for(int i=s.size()-1;~i;i--){
				if(sp && s[i]==' ' ){
					break;
				}	
				if(num.find(s[i])!=-1){
					sp=1;
					buffer=s[i]+buffer;
				}
			}
			n=stoi(buffer);
			ship.resize(n);
			for(int i=0;i<load.size();i++){
				for(int j=1;j<load[i].size();j+=4){
					if(load[i][j]!=' ')
						ship[j/4].push_back(load[i][j]-'A');
					}	
				}
			 }
			count--;
			continue;
		}
		auto [po,b,a]=threeValue(s);
//		for(int i=0;i<ship.size();i++){
//			for(int j=0;j<n;j++){
//				cout << char('A'+ship[i][j]) << " "  ;
//			}
//			cout << endl;
//		}

		change(po-1,a-1,b-1);
	}
	for(int i=0;i<n;i++) cout << char('A'+ship[i][0] ) ;

	return 0;
}
