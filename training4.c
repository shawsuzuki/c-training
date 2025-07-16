// training4
// 偶数・奇数判定プログラム
// Even/Odd Number Judgment Program

#include <stdio.h>

int main(){

    int input_number,index_evenodd;
    
    printf("Please input interger which you want to judge even or odd\n");
    scanf("%d", &input_number);

    index_evenodd = input_number % 2;
    printf("index_evenodd is = %d\n", index_evenodd);

    if (index_evenodd == 0){
        printf("The number you input is even\n");
    } else if (index_evenodd == 1 || index_evenodd == -1){
        printf("The number you input is odd\n");
    } else {
        printf("Please input in correct format\n");
    }
    
    return 0;
}