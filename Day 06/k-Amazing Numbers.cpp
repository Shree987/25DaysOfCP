/*
Author : Shreeraksha R Aithal
Problem name : k-Amazing Numbers
Problem link : https://codeforces.com/problemset/problem/1416/A
Rating : 1500
Tags : Data Structure
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int i,n,t,start,end,k;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> a(n), ans(n,-1);
		map<int,vector<int>> mp;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(mp.find(a[i]) == mp.end()){
				mp[a[i]] = vector<int>(1,i);
			}
			else{
				mp[a[i]].push_back(i);
			}
		}
		for(auto m : mp){
			start = -1;
			k = 0;
			for(auto x : m.second){
				if(start == -1){
					start = x;
					k = x+1;
				}
				else{
					k = max(k, x-start);
					start = x;
				}
			}
			k = max(n-start, k);
			if(ans[k-1] == -1)	ans[k-1] = m.first;
			else	ans[k-1] = min(m.first, ans[k-1]);
		}
		i = 0;
		while(i<n && ans[i]==-1){
			cout<<"-1 ";
			i++;
		}
		if(i<n)		cout<<ans[i]<<" ";
		for(i=i+1;i<n;i++){
			if(ans[i] == -1)	ans[i] = ans[i-1];
			else ans[i] = min(ans[i], ans[i-1]);
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}