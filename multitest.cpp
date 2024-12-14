#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    double box, phone;
    cin >> box >> phone;
    box = box * 0.75;
    int time = box / phone;
    cout << time;

    return 0;
}
