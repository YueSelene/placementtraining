#include<stdio.h>
void main(){
    int i,j;
    for (i=0;i<3;i++){
        if (i==1){
            printf("x ");
            for (j=0;j<5-2;j++){
                printf("  ");
            }
            printf("x ");
        }
        else{
            for (j=0;j<5;j++){
            printf("x ");       
            }
        }        
        printf("\n");
    }
}