#include <stdio.h>

int main() {
    int n;

    // Nhập số lượng phần tử của mảng
    scanf("%d", &n);

      int a[n+1];

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int k, x;
    scanf ("%d", &k);
    scanf ("%d", &x); 

    for (int i = n; i >= k+1; i--){
		a[i] = a[i-1];
	}
	a[k] = x;
	n++;
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}

    return 0;
}