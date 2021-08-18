
#include<bits/stdc++.h>

using namespace std;
#define lli long long int
const lli mod = 1e9+7;
int main(){
    lli n, total=0,ans=INT_MAX;
    cin >> n;
    long int a[n];
    for(lli i = 0; i < n; i++){
        cin >> a[i];
		total+=a[i];
	}
	for (lli i=0;i<1<<n;i++){
		lli s=0;
		for(lli j = 0;j<n;j++){
			cout << tmp;
			if(i&1<<j){
				s+=a[j];
			}
			lli c=abs((total-s)-s);
			ans=min(ans,c);
		}
	}
    //sort(a, a + n);
    //int ans = 2000000001;
    //for(int i = 1; i < n; i++){
        //if(a[i] - a[i - 1] < ans){
            //ans = a[i] - a[i - 1];
        //}
    //}
    cout << ans;
	return 0;
}

