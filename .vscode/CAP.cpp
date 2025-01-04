#include <bits/stdc++.h>
using namespace std; 
const long MAX = 1000000; 
int main(){
	int t; 
	cin>> t; 
	while (t--) {
		int n, m; cin >> n; 
		vector<bool> mark(MAX+1, false); 
		
		for (int i = 0; i<n; i++) {
			int x;
			cin >> x;
			mark [x] = true;
		}
		cin >> m; 
		int count =0; 
		for (int i = 0; i< m; i++) {
			int x;
			cin >> x;
			if (mark[x]) {
				count ++; 
				mark[x] = false; 
			}
		}
		cout << count; 
	}
return 0;
}
