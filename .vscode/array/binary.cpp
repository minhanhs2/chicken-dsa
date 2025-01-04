#include <iostream>
#include <vector>

using namespace std;

void generateBinaryStrings(int n, vector<int>& currentString, int index) {
  if (index == n) {
    for (int bit : currentString) {
      cout << bit;
    }
    cout << endl;
    return;
  }

  currentString[index] = 0;
  generateBinaryStrings(n, currentString, index + 1);

  currentString[index] = 1;
  generateBinaryStrings(n, currentString, index + 1);
}

int main() {
  int n;
  cin >> n;
  vector<int> currentString(n); 
  generateBinaryStrings(n, currentString, 0);

  return 0;
}
