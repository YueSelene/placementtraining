#include<stdio.h>
void main(){
    int i,j;
    for (i=1;i<=4;i++){
        for (j=0;j<=3-i;j++){
            printf("  ");
        }
        for (j=1;j<(i*2);j++){
            printf("x ",j);
        }
        printf("\n");
    }
}