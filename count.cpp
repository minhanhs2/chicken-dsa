//C++ 
#include <bits/stdc++.h> 
#include <vector>
#include <algorithm>

using namespace std;
int main() { 
	int n; 
	cin >> n;
	vector<double> a;
	a.resize(n); 
	for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
	sort (a.begin(), a.end()); //sap xep mang

	int count = 0;
	int i=0, j=1;
	while (j < n) {
        if (a[j] - a[i] == 1 || a[i] - a[j] == 1) {
            count++;
        } 
        i++;
        j++;
    }
	cout << count << endl;
	return 0;
}
