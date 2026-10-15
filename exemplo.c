#include <stdio.h>

typedef struct No {

    int valor;
    struct No *proximo;


} No; 

int main() {
    No primeiro;
    No segundo;

    primeiro.valor = 10;
    segundo.valor = 20;
   
    primeiro.proximo = &segundo;

    segundo.proximo = NULL;

    printf("%d\n", primeiro.proximo->valor);
      
    return 0;

}