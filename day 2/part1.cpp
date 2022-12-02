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
	long long val=0;
	while(getline (file,s)){
		int me=score(s[2]), enemy=score(s[0]);
//		cout << enemy << " " << me << endl;
		val+=me;
		me%=3,enemy%=3;
		if(abs(me-enemy)==2){
			me^=3,enemy^=3;    // because scissors can defeat paper so
		}
		if(me>enemy) val+=6;
		else val+=(me==enemy?3:0);
		cout << val << endl;

	}
	cout << val << endl;
	return 0;
	}
