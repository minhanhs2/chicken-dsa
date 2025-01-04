	#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(11, 0); // Kh?i t?o vector h v?i 11 ph?n t? (0 d?n 10), giá tr? ban d?u là 0

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        h[p]++; // Tang giá tr? c?a h[p] lên 1 m?i khi g?p di?m p
    }

    for (int i = 0; i <= 10; i++) {
        cout << h[i] << " ";
    }
    cout << endl;

    return 0;
}
