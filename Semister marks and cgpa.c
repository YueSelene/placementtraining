void main(){
        int a,i;
        printf("enter no of sems\n");
        scanf("%d",&a);
        float n[a][3],d[a],b=0;
        for (i=0;i<a;i++){
            printf("enter Maths , Physics and Chemistry marks (out of 100) for sem %d\n",i+1);
            scanf("%f%f%f",&n[i][0],&n[i][1],&n[i][2]);
            d[i]=(n[i][0]+n[i][1]+n[i][2])/3;
            b+=d[i];
        }
        for (i=0;i<a;i++){
            printf("\nSGPA for SEM %d = %f percent",i+1,d[i]);
        }
        printf("\nCGPA = %f percent",b/a);
}