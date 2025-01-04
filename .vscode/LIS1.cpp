#include <bits/stdc++.h>
using namespace std;
const long MAX = 1000000;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    unordered_map<int,int> dp;
    int max_length =0;
    for(int i=0;i<n;i++){
      dp[a[i]] = dp[a[i]-1]+1;
      max_length = max(max_length, dp[a[i]]);
    }
    cout << max_length;
  }
  return 0;
}
