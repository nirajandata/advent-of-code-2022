#include <bits/stdc++.h>
using namespace std;

int score(const char &ch){
	if(ch>'C')
		return ch-'X'+1;

	return ch-'A'+1;

}
int main(){
	string filename="two.in";
	ifstream file(filename);
	string s;
	vector<int> t={3,1,2};
	long long val=0;
	while(getline (file,s)){
		int me=score(s[2]), enemy=score(s[0]);
//		cout << enemy << " " << me << endl;
		val+=3*(me-1);
		val+= t[(enemy-2+me)%3];
	}
	cout << val << endl;
	return 0;
	}
