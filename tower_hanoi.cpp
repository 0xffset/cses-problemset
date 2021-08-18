#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a, int b, int c) {
	if (n == 0) {
		return;
	}
	solve(n - 1, a, c, b);
	cout << a << ' ' <<c<<endl;
	solve(n - 1, b, a, c);
}

int main() {
	int t;
	cin >> t;
	cout <<(1<<t) -1<<endl;
	solve(t, 1, 2, 3);

}
