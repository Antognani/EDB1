#include <stdio.h>

/* questão 3*/

int soma(int vetor[], int quantidade){
    int total = 0;
    for(int i = 0; i < quantidade; i++){
        total =+ vetor[i];
        return total;
    };
}

int main()
{
    int vetor[5];
    printf("Digite 5 números:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
        };
    printf("Soma: %d\n", soma(vetor[5], 5));
    return 0;
}