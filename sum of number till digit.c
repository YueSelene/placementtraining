#include <stdio.h>
void main(){
    printf("Enter a number\n");
    int a,i,b=0;
    scanf("%d",&a);
    for (i=0;i<=a;i++){
        b=b+i;
    }
    printf("Sum = %d",b);
}
