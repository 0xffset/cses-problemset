
#include <bits/stdc++.h>
using namespace std;


int main() {
	string s;
	cin >> s;
	int answer = 1, c =  0;
	char l = 'A';
	for (char i : s) {
			if (i==l){
					++c;
					answer = max(c, answer);
					
				}
				 else {
						l = i;
						c= 1;
					 }
		}
		cout << answer;
		
}

