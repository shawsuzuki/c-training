// training6

// 素数判定プログラム
// Prime Number Judgment Program

// 正の整数を入力として受け取り、その数が素数かどうかを判定するプログラム

#include <stdio.h>

int main(){

    int input_pos_int, mod_answer;

    printf("Please input positive integer:\n");
    scanf("%d", &input_pos_int);

    if (input_pos_int < 0){
        printf("Please input positive integer\n");
    } else if (input_pos_int == 1) {
        printf("This is not a prime number\n");
    } else if (input_pos_int == 2) {
        printf("This is a prime number\n");
    } else {
        int mod_index = 2;
        int is_prime = 1;
        
        while (mod_index < input_pos_int){
            mod_answer = input_pos_int % mod_index;
            
            if (mod_answer == 0){
                is_prime = 0;
                break;
            } else {
                mod_index++;
            }
        }
        
        if (is_prime == 1){
            printf("This a prime number\n");
        } else {
            printf("This is not a prime number\n");
        }

        
    }
    return 0;
}