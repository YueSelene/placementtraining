void main(){
    printf("Enter a number\n");
    int a,i,b=0;
    scanf("%d",&a);
    for (i=2;i<(a/2)+1;i++){
        if ((a%i) == 0){
            b=1;
            printf("not prime");
            break;
        }
    }
    if (b==0){
        printf("prime");
    }
}
