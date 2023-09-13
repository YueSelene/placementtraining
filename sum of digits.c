#include <stdio.h>
void main(){
    printf("Enter a number\n");
    int a,b=0;
    scanf("%d",&a);
    while (a>0){
        b+=a%10;
        a=a/10;
    }
      printf("sod = %d",b);
}