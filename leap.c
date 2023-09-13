#include <stdio.h>
void main(){
    printf("Enter year\n");
    int a;
    scanf("%d",&a);
    if ((a%400)==0){
        printf("It is a leap year\n");
    }
    else{
        printf("It is not a leap year\n");
    }
}
