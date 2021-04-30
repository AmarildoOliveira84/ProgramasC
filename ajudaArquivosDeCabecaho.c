#include<stdio.h>
#include"ajuda.c"
//int soma(int n1, int n2){
//return n1+n2;
//}

int main(){

int n1,n2, ret_s, ret_m;

mensagem();
printf("Informe o primeiro numero\n");
scanf("%d",&n1);

printf("Informe o primeiro numero\n");
scanf("%d",&n2);

ret_s = soma(n1,n2);

printf("A soma de %d com %d e %d\n",n1,n2,ret_s );


ret_m = multiplicacao(n1,n2);

printf("A multiplicacao de %d com %d e %d\n",n1,n2,ret_m );
    return 0;
}