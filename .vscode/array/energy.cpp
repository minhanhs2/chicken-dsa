#include <iostream>
#include <iomanip>

using namespace std;
int main() { 
	double p;
	double h; 
	cin >> p >> h;
	p = p*1000.0;
	double e = p * h * 30; 
	cout << fixed << setprecision(2) << e << endl;
	return 0;  
}
