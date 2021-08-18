#include <bits/stdc++.h>
using namespace std;
#define N 8
char m[8][8];
int ans =0;
bool a[15], b[15], c[7];
void solve(int d) {
			if (d==8) {
				ans++; 
				return;
			}
			for (int i=0; i <8; i++) {
					if(m[i][d] == '.' && a[i-d+7] ==0 && b[i+d]==0 && c[i] == 0) {
							a[i-d+7]=1, b[i+d]=1, c[i] = 1;
							solve(d+1);
							a[i-d+7]=0, b[i+d]=0, c[i]=0;
						}
				}
		
	}
int main() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> m[i][j];
		}
	}
	solve(0);
	cout << ans;
	

	return 0;

}
