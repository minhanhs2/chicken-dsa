#include <stdio.h>

int main() {
    int n;
    double nums[10000];
    double target;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target); 

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <n; j++) {
            if (nums[i] + nums[j] == target) {
                printf ("[%d,%d]", i, j);
            }
        }
    }

    return 0;
}