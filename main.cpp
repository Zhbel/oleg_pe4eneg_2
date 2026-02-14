#include <iostream>
#include <string>
//#include <cmath>
using namespace std;

int call_grandfather() {
    printf("tvoy ded\n");
    printf("tvoy ded 123\n");
    return 0;
}

int sum_digits(int a1, int a2) {
    return (a1 + a2 + a1)/a2;
}

int pow_2(int a1) {
    return a1 * a1;
}

bool check_number(bool cond1, int num1, int num2) {
    return (cond1 == true) && (num1 > num2);
}


int main() {

    int number1 = 999;
    int number2 = 900;
    bool zhbul = false;
    float price = 19.9;
    float price2 = 10.6;
    double price3 = 1000000.111899999999999999999;
    price3 = price3 - price;
    price3 = price3 + number2;
    number2 = number2 + price;
    number1 = -1;


    if (check_number(zhbul, number1, number2)) {
        //printf("if passed %d\n", number2);
        zhbul = false;
    } else {
        bool result = check_number(zhbul, number1, number2);
        //printf("else passed %d\n", result);
    }


    //call_grandfather();
    //call_grandfather();

    int check_function = sum_digits(13, 15);
    //printf("%d\n", check_function);

    int num3 = 10;
    int num4 = 4;
    int result = num3/num4;
    int res1 = num3 % num4;
    printf("%d\n", result);
    printf("%d\n", res1);
    int res3 = num3 * num4;
    printf("%d\n", res3);

    int res4 = pow(2, 5);

    printf("%d\n", res4);

    for (int i = 0; i <= 10; i = i + 1) {
        printf("%d\n", i);
    }

    int a1 = 100121341;
    int a2 = 5;
    while (a1 > 100) {
        a1 = a1 / a2;
        printf("%d\n", a1);
    }

    int array1[] = {1, 2, 3, 4, 50};
    printf("%d\n", array1[0]);
    int sum = 0;

    for (int i = 0; i < size(array1); i++) {
        sum += array1[i];
        printf("%d\n", sum);
    }
    return 0;
}