#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define _CRT_SECURE_NO_DEPRECATE // supres some compilation warning messages 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
//----------TEMPLATES----------
template<typename... T>
void see(T&... args) { ((cin >> args), ...);}
template<typename... T>
// To simplify repertitions/loops
#define REP(i, a,b) for (int i = int(a); i < int(b); ++i)
#define TRvi(c, it) for (vi::iterator it = (c).begin(); it!=(c).end(); it++);
#define TRvii(c, it) for (vi::iterator it = (c).begin(); it!=(c).end(); it++);
#define TRmsi(c,it) for (msi::iterator it = (c).begin(); it!=(c).end(); it++);

bool safe(string s, int a, int b) {
		REP(j,b,a) {
			if (s[j] ==s[a]) return 0;
	}
	return 1;
}
vector<string> v;
void per(string s,int a, int b) {
	if (a==b) 
		v.push_back(s); 
	REP(i,a,b+1) {
		if (safe(s,i,a)) {
			swap(s[i],s[a]);
			per(s, a+1,b);
			swap(s[i], s[a]);
		}
	}
}
void solve() {
	string s; see(s);
	per(s,0,s.size()-1);
	sort(v.begin(), v.end());
	cout << v.size() << endl;	
	for (auto i : v) {
		cout << i << endl;
	}
}
int main() {
	solve();
	return 0;
}
