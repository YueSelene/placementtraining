#include <stdio.h>
void main(){
    printf("Enter a number\n");
    int a,b=0,c,n=0,d,i;
    scanf("%d",&a);
    c=a;
    while (a>0){
        n++;
        a=a/10;
    }
    a=c;
    while (a>0){
        d=1;
        for (i=0;i<n;i++){
            d*=a%10;
        }
        b+=d;
        a=a/10;
    }
    (b==c)?printf("Armstrong"):printf("not armstrong");
}
