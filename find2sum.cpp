#include <bits/stdc++.h>

using namespace std;
 
void findTwoSum(int a[], int n, int target){

  int maxSum = 0;

  for (int i = 0; i < n-2; i++){

    int l = i +1;

    int r = n -1;

    while (l < r){

      int sum = a[i] + a[l] + a[r];

      if (sum > target){

        r--;

      } else {

        maxSum = max(maxSum, sum);

        l++;

      }

    }

  }

  cout << maxSum << endl;

}
 
// void bruteForce(int a[], int n, int target){

//   int maxSum = 0;

//   for (int i=0;i<n;i++){

//     for(int j=i+1; j<n-1;j++){

//       for (int k=j+1; k<n; k++){

//         int sum = a[i] + a[j] + a[k];

//         if (sum <= target){

//           maxSum = max(maxSum, sum);

//         }

//       }

//     }

//   }

//   cout << maxSum << endl;

// }
 
 
 
int main() 

{

    int n, x;

    int a[100000];

    cin >> n >> x;

    cin.tie(0);

    cout.tie(0);

    for (int i=0;i<n;i++){

      cin >> a[i];

    }

    sort(a,a+n);

    findTwoSum(a,n,x);

    return 0;

}
 
