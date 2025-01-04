#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    string thoiGianGui, thoiGianLay;
    cin >> thoiGianGui >> thoiGianLay;

    int gioGui, phutGui, gioLay, phutLay;

    // Chuy?n d?i th?i gian g?i t? chu?i sang s?
    sscanf(thoiGianGui.c_str(), "%d:%d", &gioGui, &phutGui);

    // Chuy?n d?i th?i gian l?y t? chu?i sang s?
    sscanf(thoiGianLay.c_str(), "%d:%d", &gioLay, &phutLay);

    // Ki?m tra th?i gian g?i và l?y xe
    if (gioGui > gioLay || (gioGui == gioLay && phutGui > phutLay)) {
        cout << -1 << endl; // Th?i gian nh?p vào l?i
    } else if (gioGui == gioLay && phutGui == phutLay) {
        cout << 0 << endl; // G?i và l?y cùng th?i di?m
    } else {
        int giaVe = 5000;
        if (gioLay >= 18) {
            giaVe = 8000; // L?y xe t? 18h00 tr? di
        }
        cout << giaVe << endl;
    }

    return 0;
}
