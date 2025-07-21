// training12
// 動的メモリ確保プログラム
// Dynamic Memory Allocation Program

// 動的メモリ確保（malloc/free）を使用するプログラムを作成してください。
// 要件

// ユーザーから配列サイズを入力として受け取る
// mallocを使って動的に整数配列を確保
// 配列に値を入力して表示
// freeでメモリを解放

#include <stdio.h>
#include <stdlib.h>

int main(){

    //　user inputs array_size as integer 
    printf("please input the size of array");
    int array_size;
    scanf("%d", &array_size);

    // reserve size of array_size
    int *array_ptr = malloc(sizeof(int) * array_size);
    
    // input numbers of array
    for (int i=0; i<array_size; i++){
        printf("please input the number of array's character number %d\n", i);      
        scanf("%d", &array_ptr[i]);
    }

    // display the array whih user input
    printf("The array you input is\n");
    for (int i=0; i<array_size; i++){
        
        printf("%d", array_ptr[i]);

        if (i<array_size -1 ){
            printf(", ");
        }
    }
    printf("\n");


    free(array_ptr);
    array_ptr = NULL;

    return 0;
}