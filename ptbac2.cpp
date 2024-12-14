#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
  int a, b, c; 
  cin >> a >> b >> c;
  float delta; 
  delta = b*b - 4*a*c;
  if (delta < 0) {
  	cout << "NO SOLUTION";
  }
  if (delta == 0) { 
  	double ans = - b/ (2*a); 
  	cout << fixed << setprecision(2) << ans << endl;
  }
  if (delta > 0) {
  	double ans1 = (-b -sqrt(delta))/(2*a); 
  	double ans2 = (-b +sqrt(delta))/(2*a); 
  	cout << fixed << setprecision(2) << ans1 << endl;
  	cout << fixed << setprecision(2) << ans2 << endl;
  }
}
