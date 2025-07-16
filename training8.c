// training8
// 配列操作プログラム
// Array Operation Program

// 5つの整数を配列に格納し、以下の操作を行うプログラム

// # 要件
// 配列の全要素を表示
// 全要素の合計を計算
// 最大値と最小値を見つける
// 配列を逆順で表示

#include <stdio.h>

int main(){
    
    printf("Please input 5 integer with single blanks between numbers\n");

    // user input
    int num[5];
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    printf("integers you input are：%d, %d, %d, %d, %d\n", num[0], num[1], num[2], num[3], num[4]);

    // calculate sum
    int sum = 0;
    for (int i=0; i<=4; i++){
        sum = sum + num[i];
    }
    printf("sum of integers you input is: %d\n",sum);

    // finding max and min
    int max = num[0]; 
    int min = num[0];
    for (int i=1; i<=4; i++){
        if(num[i] >= max){
            max = num[i];
        }
        if (num[i] <= min){
            min = num[i];
        }
    }

    printf("Max is %d\n", max);
    printf("Min is %d\n", min);

    // sort other way around of the input list
    printf("The reverse order of the list you input are: ");
    for (int i=4; i>=0; i--){
        printf("%d ",num[i]);
    }
    printf("\n");
    
    return 0;
}