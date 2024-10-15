#include <stdio.h>


int main(void){

    int a,b,c , *d;
    a = 1;
    b = 2;
    c = 3;

    a = *d;

    printf("%d %d %d\n", a,b,c);
    printf("%p %p %p\n", a, b, c);


}