#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n<2) return false;
    for (int i = 2; i <= n-1; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int k;
    scanf ("%d", &k);

	 for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            printf("%d ", a[i]); 
        }
    }
    return 0;
}