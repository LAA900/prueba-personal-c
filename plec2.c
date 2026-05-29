#include <stdio.h>

void duplicar(int *x){
    int b = 10;
    *x = *x + b;
}

int main(){
    int a = 500;
    printf("variable a: %d\n",a);
    duplicar(&a);
    printf("variable a: %d\n",a);
    return 0;
}
