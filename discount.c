#include<stdio.h>
void main(){
    while (1){
        float a,b;
        char c,d;
        printf("enter cost price\n");
        scanf("%f",&a);
        printf("are u a student Y/N?\n");
        getchar();
        c = getchar();
        if ((c=='y')||(c=='Y')){
            if (a>500){
                b=a-(a/10);
            }
            else{
                b=a-(a/20);
            }
        }
        else{
            if (a>500){
                b=a-((a/100)*8);
            }
            else{
                b=a-(a/50);
            }
        }
        printf("The discounted price = %f\n",b);
        printf("NEXT CUSTOMER Y/N?\n");
        getchar();
        d = getchar();
        if ((d=='n')||(d=='N')){
            break;
        }
    }
}