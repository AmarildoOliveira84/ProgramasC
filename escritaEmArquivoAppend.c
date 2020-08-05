#include<stdio.h>

int main() {
    FILE *arq;
    char pecas[100];
    arq=fopen("pecas.txt", "a");

    printf("Informe as pecas ou clique em 1 para sair: ");
    fgets(pecas, 100, stdin);

    if (arq) {

        while (pecas[0]!='1') {
            fputs(pecas, arq);

            printf("Informe as pecas ou clique em 1 para sair: ");
            fgets(pecas, 100, stdin);
        }


    }
    else {

        printf("Arquivo nao pode ser criado: ");
    }

    return 0;

}