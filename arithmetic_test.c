#include <stdio.h>

int main () {
    int number;
    int number2;
    scanf("%d", &number);
    scanf("%d", &number2);

    int sum = number + number2;
    int sub = number - number2;
    int pow = number * number2;

    printf("%d ", sum);
    printf("%d ", sub);
    printf("%d ", pow);

    if (number2 == 0) {
        printf("n/a");
    } else {
        printf("%d", number / number2);
    }
    return 0;
}