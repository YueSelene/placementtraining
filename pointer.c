#include <stdio.h>
void main(){
    int a=10,*ptr;
    //ptr=&a;
    /*printf("%p\n%d\n",ptr,*ptr);
    ptr=ptr+1;
    printf("%p\n%p\n%d\n%d",&a,ptr,*ptr,a);*/
    printf("hi");
    a=10;
    a=++a + ++a + a++ + a++;
    printf("\n%d\n",a);
    a=10;
    printf("\n%d\n",(++a + ++a + a-- + a--));
}
