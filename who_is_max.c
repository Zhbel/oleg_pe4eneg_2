#include <stdio.h>

int find_max(int a1, int a2) {
    int max = a1;
    if (max < a2) {
        max = a2;
    }
    return max;
}
int main () {
    int number;
    int number2;
    if ((scanf("%d", &number) != 1) || (scanf("%d", &number2) != 1)) {
        printf("n/a\n");
    } else {
        printf("%d\n", find_max(number, number2));
    }
    return 0;
}