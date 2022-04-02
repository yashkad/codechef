#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin>>n;

	map<int,int> m;

	for(int i=0;i<n;i++) {
		int item;
		cin>>item;
		if(m.find(item) == m.end()){
			m[item] = 1;
		}
		else {
			m[item]++;
		}
	}

	int req = 0;
	for(auto it : m) {
		int val = it.second;

		if(val%2)	{
			req += 1;
		}
	}

	if(((n+req)/2)%2) {
		req += 2;
	}

	cout<<req<<endl;
}

int main() {
	int t;
	cin>>t;

	while(t--) {
		solve();
	}
	return 0;
}