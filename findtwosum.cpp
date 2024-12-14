#include <bits/stdc++.h>
using namespace std;
 
// void findTwoSum(int a[], int n){
//   long long result = 0;
//   int i = 0; 
//   while (i < n){
//     int j = i;
//     while ( j < n && a[j] == a[i]){
//       j++;
//     }
//     long long count = j-i;
//     if (count > 1){
//       result += (count * (count-1))/2;
//     }
//     i = j;
//   }  
//   cout << result << endl;
// }
 
// void bruteForce(int a[], int n){
//   int count = 0;
//   for (int i=0;i<n;i++){
//     for (int j = i+1; j<n;j++){
//       if (a[i] == a[j]) count++;
//     }
//   }
//   cout << count << endl;
// }
 
 
 
int main() 
{
    int n, x;
    int a[100000];
    cin >> n;
    cin.tie(0);
    cout.tie(0);
    long long results = 0;
    unordered_map<int, long long> frequency;
    for (int i=0;i<n;i++){
      cin >> a[i];
      frequency[a[i]]++;
    }
    for(auto &i : frequency){
      long long count = i.second;
      if (count > 1){
        results += (count * (count-1))/2;
      }
    }
    // sort(a,a+n);
    // findTwoSum(a,n);
    cout << results << endl;
    return 0;
}
