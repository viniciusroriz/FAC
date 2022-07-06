#include <stdio.h>

void elemDistintos(int a[],int b) {             
    int aux=0;                                  // numero de repeticoes

    for(int i=0; i<b; i++) {
        for(int j=1; j+i<b; j++) {
            if(a[j+i] == a[i]){
                aux++;
            }
        }
    }

    int c = b-aux;                              // total de elementos - numero de repeticoes

    printf("qtd = %d\naux = %d\n",c,aux);
}

void elemDistintos2(int a[],int b) {             
    int aux=1;                                  // numero de repeticoes

    for(int i=1; i<b; i++) {
        if(a[i] != a[i-1]){
            aux++;
        }
    }

    printf("qtd = %d\n",aux);
}


int main() {
    int array[] = {0,0,2,2,3,4,5,5,6};
    elemDistintos2(array, 9);

    return 0;
}