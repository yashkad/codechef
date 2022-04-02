#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sod(int n) {
	int s = 0,rem = 0;

	while(n!=0) {
		int rem = n%10;
		s += rem;
		n = n/10;	
	}
	return s;
}

void solve() {
	int n;
	cin>>n;

	int ans = sod(n);

	int rem = ans%2;

	int flag = 1, i=1;

	while(flag){
		int sm = sod(n+i);
		int rm = sm%2;

		if(rem != rm) {
			cout<<n+i<<endl;
			break;
		}
		i+=1;
	}

}

int main() {
	int t;
	cin>>t;

	while(t--) {
		solve();
	}
	return 0;
}