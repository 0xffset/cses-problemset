#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
		int n;
		cin >> n;
		int mx= 0;
		ll answer = 0;
		for (int i =0; i < n; ++i) {
				int x; 
				cin >> x;
				mx = max(x, mx);
				answer += mx - x;
			}
			cout <<  answer;
			
		return 0;
	}


