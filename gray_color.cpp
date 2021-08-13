#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for (int i =0; i<(1<<n); i++) {
		int a = (i ^ (i>>1));
		bitset<32> r(a);
		string ss = r.to_string();
		cout << ss.substr(32 - n) <<endl;
	}
	return 0;
}
