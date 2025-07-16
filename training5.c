// training5
// 階乗計算プログラム
// Factorial Calculation Program

//正の整数nを入力として受け取り、n!（nの階乗）を計算するプログラム

#include <stdio.h>

int main(){

    int input_integer_n;
    int factorial = 1;

    printf("Please input positive interger n:");
    scanf("%d", &input_integer_n);

    if (input_integer_n == 0){
        factorial = 1;
        printf("N! = %d\n", factorial);
    } else if ( input_integer_n < 0){
        printf("Please input positive interger\n");
    } else {

        int index = 1;
        
        while (index <= input_integer_n){
            factorial = factorial * index;
            index ++;
        }
        
        printf("N! = %d\n", factorial);

        
    } 
    return 0;
}