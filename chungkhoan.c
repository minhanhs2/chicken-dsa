#include <stdio.h>

int main() {
    int n, i;
    int a[1000000];
    int maxLen = 1;  // Độ dài chuỗi tăng dài nhất, khởi tạo là 1
    int currentLen = 1; // Độ dài chuỗi tăng hiện tại

    // Nhập dữ liệu
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Tìm chuỗi tăng dài nhất
    for (i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            currentLen++; // Nếu giá trị hiện tại lớn hơn giá trị trước đó, tăng độ dài chuỗi hiện tại
            if (currentLen > maxLen) {
                maxLen = currentLen; // Cập nhật độ dài chuỗi tăng dài nhất
            }
        } else {
            currentLen = 1; // Ngược lại, reset độ dài chuỗi hiện tại
        }
    }

    // In kết quả
    printf("%d", maxLen);
    return 0;
}