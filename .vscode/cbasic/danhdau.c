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
    int max = a[0]; 
     for (int i = 0; i < n; i++) {
        if (a[i] > max) {max = a[i];}
    }
    int b[10000]; 

    for (int i = 0; i <= max; i++) {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        b[a[i]] +=1;
    }
    
    for (int i = 0; i <= max; i++) {
        if (b[i] >0) {
            printf ("%d - %d; ", i, b[i]); 
        }
    }

    return 0;
}