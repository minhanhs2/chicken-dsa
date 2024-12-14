//C++ 
#include <bits/stdc++.h> 
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
int main() { 
	int n; 
	cin >> n;
	vector<int> a;
	a.resize(n); 
	for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
	int count1 =0, count2 = 0;
	for (int i=0; i<n; i++) {
		if (double(a[i] % 2)==0) {
		count2++;
		}
		else count1++;
	}
	cout << count1 << " " << count2 ;
	return 0;
}
