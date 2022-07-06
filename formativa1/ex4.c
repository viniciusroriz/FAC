#include <stdio.h>

int main(){
    int a, c = 0;
    int viagens = 0;

    printf("Digite a capacidade: ");        //ex: 5
    scanf("%d", &c);
    printf("Digite a qtd de alunos: ");     //ex: 10
    scanf("%d", &a);

    viagens = a/(c-1);
    if (a%c != 0){
        viagens += 1;
    }

    printf("São necessárias %d viagens\n", viagens);

    return 0;
}