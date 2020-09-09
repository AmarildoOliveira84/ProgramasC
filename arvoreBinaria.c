#include<stdio.h>
#include<stdlib.h>

struct st_arvore
{
    int valor;
    struct st_arvore *sad;
    struct st_arvore *sae;
    
    
};

typedef struct st_arvore arvore;
arvore* criaArvore(){
    return NULL;
}

int arvoreEstaVazia(arvore* t){
return t==NULL;
}

void mostraArvore(arvore* t){
printf("<");
if(arvoreEstaVazia(t)){
printf("%d", t->valor);
mostraArvore(t->sae);
mostraArvore(t->sad);
}
printf(">");
}
void insereDadosArvore(arvore** t, int num){

}
int main(){


return 0;
}