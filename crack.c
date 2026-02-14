#include <stdio.h>

int main () {
    float x;
    float y;

    if ((scanf("%f", &x) != 1) || (scanf("%f", &y) != 1)) {
        printf("n/a\n");
        return 0;
    }
    if(x*x +y*y < 25.0){
        printf("GOTCHA");
    }else{
        printf("MISS");
    }

    return 0;
}