#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    int b[1000];
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    int c[2000];

    int size = 0; // lưu số lượng phần tử của dãy c
    int i = 0, j = 0;
    
	while (i < n && j <m) {
        if (a[i] < b[j]){
            c[size] = a[i];
            size = size + 1;
            i = i + 1;
        } else {
            c[size] = b[j];
            size = size + 1;
            j = j + 1;
        }
    }
    while (i < n){
        c[size] = a[i];
        size = size + 1;
        i = i + 1;
    }
    while (j < m){
        c[size] = b[j];
        size = size + 1;
        j = j + 1;
    }

    for (int i = 0; i < size; i++){
        printf ("%d ", c[i]);
    }
    return 0;
}