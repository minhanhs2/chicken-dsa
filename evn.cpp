#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int old = 0, new_price = 0; // Ð?i tên bi?n new thành new_price

    // Tính giá cu
    if (n <= 50) {
        old = n * 1728;
    } else if (n <= 100) {
        old = 50 * 1728 + (n - 50) * 1786;
    } else if (n <= 200) {
        old = 50 * 1728 + 50 * 1786 + (n - 100) * 2074;
    } else if (n <= 300) {
        old = 50 * 1728 + 50 * 1786 + 100 * 2074 + (n - 200) * 2612;
    } else if (n <= 400) {
        old = 50 * 1728 + 50 * 1786 + 100 * 2074 + 100 * 2612 + (n - 300) * 2919;
    } else { 
        old = 50 * 1728 + 50 * 1786 + 100 * 2074 + 100 * 2612 + 100 * 2919 + (n - 400) * 3015;
    }

    // Tính giá m?i
    if (n <= 100) {
        new_price = n * 1728;
    } else if (n <= 200) {
        new_price = 100 * 1728 + (n - 100) * 2074;
    } else if (n <= 400) {
        new_price = 100 * 1728 + 100 * 2074 + (n - 200) * 2612;
    } else if (n <= 700) {
        new_price = 100 * 1728 + 100 * 2074 + 200 * 2612 + (n - 400) * 3111;
    } else {
        new_price = 100 * 1728 + 100 * 2074 + 200 * 2612 + 300 * 3111 + (n - 700) * 3457;
    }

    long long result = new_price * 11 - old * 11; // Tính toán v?i s? nguyên tru?c khi chia
    double final_result = result / 10.0; // Chia cho 10.0 d? du?c k?t qu? double

    cout << fixed << setprecision(2) << final_result << endl;
 
    return 0;
}
