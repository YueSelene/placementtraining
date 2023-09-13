#include <stdio.h>
void main(){
    printf("Enter divior and limit\n");
    int a,b,dba=0,ndba=0;
    scanf("%d%d",&a,&b);
    for (int i=1;i<=b;i++){
        if (i%a==0){
            dba+=i;
        }
        else {
            ndba+=i;
        }
    }
    printf("Sum of nos divisible by %d = %d\n",a,dba);
    printf("Sum of nos not divisible by %d = %d\n",a,ndba);
    printf("difference = %d\n",ndba-dba);
}