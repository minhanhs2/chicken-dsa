#include <iostream>

using namespace std;

// Function to check if the array is in non-decreasing order
int dondieutang(int a[1000], int n) {
    if (n <= 1) return 0; // An array with 0 or 1 element is considered non-decreasing
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) return 1; // Not non-decreasing
    }
    return 0; // It's non-decreasing
}

// Function to check if the array is in non-increasing order
int dondieugiam(int a[1000], int n) {
    if (n <= 1) return 0; // An array with 0 or 1 element is considered non-increasing
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) return 1; // Not non-increasing
    }
    return 0; // It's non-increasing
}

int main() {
    int n;
    cin >> n;
    int a[1000]; // Use a fixed size array to avoid potential issues
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (dondieugiam(a, n) == 0 || dondieutang(a, n) == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}