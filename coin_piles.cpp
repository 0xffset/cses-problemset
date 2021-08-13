#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
int main () {
	ll t = 0;
	cin >> t;
	for(int i = 0; i < t; ++i) {
		ll a, b = 0;
		cin >> a >> b;
		if (a<b) {
			swap(a, b);
		}
		if (a>2*b){
			
			cout <<"NO\n";
		}
		else {
			a%=3,b%=3;
			if (a<b) {
				swap(a,b);
			}
			if ((a==2 && b==1) || (a==b && b==0)) {
				cout <<"YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
}

