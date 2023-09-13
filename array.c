#include<stdio.h>
void main(){
    int n,i,min,max,j,f;
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter values:\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        max=a[i];
        min=a[i];
    }
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
        if (max<a[i]){
            max=a[i];
        }
        if (min>a[i]){
            min=a[i];
        }
    }
    printf("\nMax = %d\nMin = %d",max,min);
    printf("\nSum of max + min = %d",max+min);
    for (i=0;i<n;i++){
        f=0;
        for (j=i;j<n;j++){
            if (a[j]>a[i]){
                printf("\n%d -> %d",a[i],a[j]);
                f=1;
                break;
            }
        }
        if (f==0){
            printf("\n%d -> %d",a[i],-1);
        }
    }
}
