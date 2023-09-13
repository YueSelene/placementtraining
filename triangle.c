#include <stdio.h>
void main(){
    printf("Enter 3 sides of a triangle\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a==b)&&(a==c)){
        printf("It is equilateral\n");
    }
    else if((a==b)||(a==c)||(b==c)){
        printf("It is isoceles\n");
    }
    else{
        printf("it is scaline\n");
    }
}
