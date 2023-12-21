#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define lli long long int
using namespace std;
int main() {
	int N;
	cin>> N;

	vector<int> res(N);
	for (int i = 0; i < N; i++) {
		cin >> res[i]; 
	}
	int result = 0;
	sort(res.begin(), res.end());
	for (int i =0; i < N; i++) {
		result += (res[i] != res[i-1]);
	}

	cout << result << endl;
	return 0;
}

