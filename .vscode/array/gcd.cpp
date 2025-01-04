#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int a;
  cin >> a;
  for (int i = -a; i <= a; i++) {
      if (i!=0 && a % i == 0) {cout << i;
  }
}
  return 0;
}
