#include <bits/stdc++.h>
#include <string.h>
#include <map>
using namespace std;
int main () {
	string str = "";
	cin >> str;
	int odd = 0;
	char c;
	map<char, int> a;
	for (int i = 0; i < str.length(); i++){
		a[str[i]]++;
	}
	
	for (auto i=a.begin(); i!=a.end(); i++) {
		if ((i->second)%2!=0) {
			odd++;
			c = i->first;
		}
	}
	if (odd>1 || str.length() % 2 == 0 && odd == 1) {
		cout<<"NO SOLUTION" << "\n";
	   return 0;	
	}
	string f,s = "";
	for (auto i : a) {
		string str(i.second/2, i.first);
		f = f+str;
		s = str+s;
	}
	if (odd == 1) {
		cout << f+c+s<<endl;
	}
	else {
		cout << f+s<<endl;
	}
}
