#include <stdio.h>
void main(){
    printf("Enter a number\n");
    int a,b=0,c;
    scanf("%d",&a);
    c=a;
    while (a>0){
        b=(b*10)+(a%10);
        a=a/10;
    }
    (b==c)?printf("Palindrome"):printf("Not Palindrome");
}
