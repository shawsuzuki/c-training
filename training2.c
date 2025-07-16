// training2
// 三角形の底辺と高さを入力として受け取り、面積を計算して出力するプログラム

#include <stdio.h>

int main(){

    double baselength, height, area;

    printf("input base length of triangle\n");
    scanf("%lf", &baselength);
    printf("input height of triangle\n");
    scanf("%lf", &height);

    area = ( baselength * height ) / 2;
    printf("area size = %.2f \n", area);
}