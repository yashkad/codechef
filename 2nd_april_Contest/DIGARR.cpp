#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;

	string s;
	cin>>s;
	int flag = 0;
	for(int i=0;i<n;i++) {
		if(s[i] == '0' || s[i] == '5'){
			flag = 1;
		}
	}

	if(flag){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}

int main() {
	int t;
	cin>>t;

	while(t--) {
		solve();
	}
	return 0;
}