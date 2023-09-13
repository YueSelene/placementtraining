#include<stdio.h>
void main(){
    int a=1,b=1,c,n;
    printf("enter the no of terms:\n");
    scanf("%d",&n);
    printf("%d, %d",a,b);
    for (int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf(", %d",c);
    }
}