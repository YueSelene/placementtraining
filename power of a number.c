#include <stdio.h>
void main(){
    printf("Enter 2 nos\n");
    int a,b,c=1;
    scanf("%d%d",&a,&b);
    while (b>0){
        c*=a;
        b--;
    }
    printf("pow = %d",c);
}