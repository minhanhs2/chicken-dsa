#include <stdio.h>

int main() {
    int n;

    // Nhập số lượng phần tử của mảng
    scanf("%d", &n);

      int a[n];

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Thay đổi giá trị của mỗi phần tử thành bình phương của chính nó
    for (int i = 0; i < n; i++) {
        a[i] = a[i] * a[i];
    }

    // In mảng ra màn hình
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}