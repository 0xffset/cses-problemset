#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n, c= 0; 
	cin >> n; 
	if(n < 0) {
		return 0;
	}
	for (int i = 5; n / i >= 1; i *= 5) {
		c += n / i;
	}

	cout << c;

	
}
