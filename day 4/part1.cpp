#include <bits/stdc++.h>
using namespace std;

pair<int,int> calc(const string &c){
	int x,y,pos;
	pos=c.find('-');
	x=stoi(c.substr(0,pos));
	y=stoi(c.substr(pos+1,c.size()));
	return make_pair(x,y);
}
int main(){
	string s;
	long long count=0;
	while(getline(cin,s)){
		string s1,s2;
		s1=s.substr(0,s.find(','));
		s2=s.substr(s.find(',')+1,s.size());
		
		int x1,y1,x2,y2;
		tie(x1,y1)=calc(s1);
		tie(x2,y2)=calc(s2);


//		cout << x1 << " " << y1 << " " <<x2 << " " << y2 << endl;
		for(int i=0;i<2;i++){
			if(x1<=x2 && y2<=y1){
				count++;
				break;
			}
			swap(x1,x2);
			swap(y1,y2);
		}
		
	}
	cout << count << endl;
	return 0;
}
