// training3
// 成績判定プログラム
// Grade Evaluation Program

#include <stdio.h>

int main(){
    
    int score;

    printf("Please input your score\n");
    scanf("%d", &score);

    if (score >= 90){
        printf("your grade is A\n");
    } else if (score >= 80){
        printf("your grade is B\n");
    } else if (score >= 70){
        printf("your grade is C\n");
    } else if (score >= 60){
        printf("your grade is D\n");
    } else if (score >= 0){
        printf("your grade is F\n");
    } else {
        printf("Please input correct score\n");
        return 1;
    }
    
    return 0;
}