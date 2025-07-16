// training10
// ポインタ基礎プログラム
// Pointer Basics Program

// 整数変数のアドレスを取得し、ポインタを使って値を表示・変更するプログラム

// 要件
// 整数変数numを宣言し、値を代入
// ポインタptrでnumのアドレスを保存
// 以下を出力：
// numの値
// numのアドレス
// ポインタ経由でのnumの値
// ポインタ経由でnumの値を変更し、結果を表示

#include <stdio.h>

int main(){
    int num = 10;
    int *ptr = &num;

    printf("num = %d\n", num);
    printf("num's address = %p\n", ptr);
    printf("num via point = %d\n", *ptr);
    *ptr = 20;
    printf("changed num = %d\n", num);
}