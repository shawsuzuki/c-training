// training9
// 関数作成プログラム
// Function Creation Program
// 以下の関数を作成し、main関数から呼び出すプログラムを作成してください：

// 要件
// int add(int a, int b) - 2つの整数の和を返す
// int factorial(int n) - nの階乗を返す
// void printArray(int arr[], int size) - 配列を表示する
// int findMax(int arr[], int size) - 配列の最大値を返す

#include <stdio.h>

int add(int a, int b){
    return a+b;
}

int factorial(int n){
    int sum = 1;
    for (int i=1; i <= n; i++){
        sum = sum * i;
    }
    return sum;
}

void printArray(int arr[], int size){
    printf("This is numbers you input:");
    for (int i=0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMax(int arr[], int size){
    int max = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int a = 5;
    int b = 6;
    int n = 4;
    int arr[6] = {3,9,15,12,6,4};
    int size = 6;

    int sum = add(a, b);
    printf("Sum is: %d\n", sum);
    
    int fact = factorial(n);
    printf("Factorial of %d is: %d\n", n, fact);
    
    printArray(arr, size);
    
    int max = findMax(arr, size);
    printf("Max is: %d\n", max);
    
    return 0;
}