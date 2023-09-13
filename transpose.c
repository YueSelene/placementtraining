#include<stdio.h>
void main(){
    int i,j,m,n;
    printf("enter m,n\n");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m];
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("enter value %d,%d\n",i,j);
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix :\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

}