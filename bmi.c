#include <stdio.h>

int main() {
    int w;
    float h;
    float bmi;
    scanf("%d", &h);
    scanf("%d", &w);
    bmi = w / (h*h);
    printf("%0.2f", bmi);
    return 0;
}