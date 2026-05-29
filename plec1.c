#include <stdio.h>


void swap(int *a, int *b);

int main(){
    int a = 10;
    int b = 5;
    printf("variable a: %d\tvariable b: %d\n",a,b);
    swap(&a,&b);
    printf("variable a: %d\tvariable b: %d\n",a,b);
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
