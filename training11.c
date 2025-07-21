// training11
// ポインタと配列プログラム
// Pointer and Array Program

// 要件

// 整数配列arr[5] = {1, 2, 3, 4, 5}を宣言
// ポインタを使って配列の各要素にアクセス
// ポインタ演算（ptr + 1, ptr + 2）を使用
// 配列名とポインタの関係を確認

#include <stdio.h>

int main(){
    
    int arr[5] = {1, 2, 3, 4, 5};

    int *arr_base_pointer = &arr[0];
    int *arr_pointer1 = arr_base_pointer + 1;
    int *arr_pointer2 = arr_base_pointer + 2;
    int sum_value = *arr_pointer1 + *arr_pointer2;

    printf("base element (arr[0]) = %d\n", *arr_base_pointer);
    printf("second element (arr[1]) = %d\n", *arr_pointer1);
    printf("third element (arr[2]) = %d\n", *arr_pointer2);
    printf("sum of arr[1] + arr[2] = %d\n", sum_value);
    
        // 配列名とポインタの関係を確認
    printf("\n=== 配列名とポインタの関係 ===\n");
    printf("arr = %p\n", arr);              // 配列名
    printf("&arr[0] = %p\n", &arr[0]);       // 最初の要素のアドレス
    printf("arr_base_pointer = %p\n", arr_base_pointer);  // 同じアドレス
    
    return 0;
}