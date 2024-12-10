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

    int k;
    scanf ("%d", &k);

	for (int i = 0; i < n; i++){
        if (i != k)
		printf("%d ", a[i]);
	}

    return 0;
}