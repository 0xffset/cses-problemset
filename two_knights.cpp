#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main () {
	int n; 
	cin >> n;
	ll k1,k2,ktot,r;
	for (int i = 1; i <= n; ++i) {
			k1 = i*i;
			k2 = k1-1;	
			ktot=k1*k2/2;
			r = 4*(i-1)*(i-2);
			cout << ktot - r << "\n"; 
		}
	return 0;
	}
	
