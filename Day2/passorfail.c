#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter marks for 5 subjects:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a >= 35 && b >= 35 && c >= 35 && d >= 35 && e >= 35) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}