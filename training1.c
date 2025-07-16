// training1
// 2つの整数を入力して、その和を出力するプログラム

#include <stdio.h>

int main() {
    int number_1, number_2, sum;

    printf("整数値を入力してください\n");
    scanf("%d", &number_1);
    scanf("%d", &number_2);

    printf("入力された数値の合計値: %d\n",number_1+number_2);
}