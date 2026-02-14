#include <stdio.h>
#include <math.h>

int main () {
    float x;
    if ((scanf("%f", &x) != 1)) {
        printf("n/a\n");
    } else {
        if (x == 0) {
            printf("n/a\n");
            return 0;
        }
        float res;
        float a1 = 7e-3 * pow(x, 4);
        float a2 = ((22.8 * pow(x, 1/3) - 1000) * x + 3);
        float a3 = (pow(x, 2) / 2);
        float a4 = x * pow((10 + x), 2/x) - 1.01;

        if (a3 == 0) {
            printf("n/a\n");
            return 0;
        }
        res = a1 + a2 / a3 - a4;
        printf("%.1f", res);
    }
    return 0;
}