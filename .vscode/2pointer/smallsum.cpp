#include <bits/stdc++.h>
using namespace std; 
using ll = long long;
int main(){
	ll n, s; 
	cin >> n >> s; 
	int a[n]; 
	for (int &x : a) cin >> x;
	ll sum = 0, ans = 0, count;
	int l=0, r; 
	for (r=0; r<n; r++) {
		sum += a[r]; 
		while (sum >= s) {
			sum -= a[l]; 
			++l;
			if (sum < s && sum > ans) ans = sum; //tinh tong lon nhat <s
		}
		count += r - l + 1; //tinh so luong day con ma tong < s
	}
	cout << ans << endl; 
	return 0; 
}
