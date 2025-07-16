// training7

// 九九表作成プログラム
// Multiplication Table Program

// 九九表（1×1から9×9まで）を表形式で出力するプログラム

#include <stdio.h>

int main(){

    int num_row, num_col, sum;

    // ヘッダー行を先に出力
    printf("     ");
    for (num_col = 1; num_col <= 9; num_col++) {
        printf("%2d:", num_col);
    }
    printf("\n");

    // データ行を出力
    for (num_row = 1; num_row <= 9; num_row++){
        printf("%3d: ", num_row);  // 行番号
        for (num_col = 1; num_col <= 9; num_col++){
            sum = num_row * num_col;
            printf("%3d", sum);
        }
        printf("\n");
    }
    return 0;  
}