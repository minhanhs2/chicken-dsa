#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    double T = 0; // Sử dụng double
    for (int i = n; i >= 1; i--) { // Thay đổi thứ tự cộng
        T += 1.0 / i; 
    }
    printf("%.5f", T);
    return 0;
}