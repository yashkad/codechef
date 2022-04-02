#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n,a,b;
	cin>>n>>a>>b;

	int diff = abs(a-b);
	int mini = min(a,b);
	int maxi = max(a,b);

	if(diff > 2  || diff <=0){
		cout<<0<<endl;
		return;
	}

	if(diff==2 || (mini==1) || maxi == n){
		cout<<1<<endl;
		return;
	}

	else cout<<2<<endl;

}

int main() {
	int t;
	cin>>t;

	while(t--) {
		solve();
	}
	return 0;
}