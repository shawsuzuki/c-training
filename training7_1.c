// training7

// 九九表作成プログラム
// Multiplication Table Program

// 九九表（1×1から9×9まで）を表形式で出力するプログラム

#include <stdio.h>

int main(){

    int num_row, num_col, sum;

    for (num_row = 0; num_row <= 9; num_row++){
        for (num_col = 0; num_col <= 9; num_col++){
            sum = num_row * num_col;

            if (num_row == 0){

                if(num_col == 9){
                    printf("%d\n",num_col);
                } else {
                    printf("%d  ",num_col);
                }

            } else {

                if (num_col == 0){
                    printf("%d  ", num_row);
                } else if (num_col == 9) {
                    printf("%d\n", sum);
                } else if (sum <= 9) {
                    printf("%d  ", sum);
                } else {
                    printf("%d ", sum);
                }

            }

        };

    }

    return 0;
}