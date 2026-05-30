#include <stdio.h>

int mi_strlen(char* x){
    int len = 0;
    for(int i=0; x[i] != '\0';i++)
    {
        len = len + 1;
    }
    return len;
}

int main(){
    char nombre[5] = "hola";
    printf("%s\n",nombre);
    int longitud = mi_strlen(nombre);
    printf("Longitud del arreglo char: %d\n",longitud);
    return 0;
}
