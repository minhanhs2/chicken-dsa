#include <bits/stdc++.h>
using namespace std; 
using ll = long long;
int main(){
	ll n, s; 
	cin >> n >> s; 
	vector<pair<int, int>> v(n);
	for (int i = 0; i< n; i++) {
		cin >> v[i].first;
		v[i].second = i; 
	}
	sort(v.begin(), v.end()); 
	int l = 0, r = n-1; 
	while (l<r) {
		int sum = v[l].first + v[r].first; 
		if (sum == s) {
			cout << v[l].second + 1 << " " << v[r].second + 1 << endl; 
			return 0;
		}
		else if (sum < s) {
			++l;
		}
		else --r;
	}
	cout << "IMPOSSIBLE" ;
	return 0; 
}
