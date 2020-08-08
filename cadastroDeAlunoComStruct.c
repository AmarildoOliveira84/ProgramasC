#include <stdio.h>
#include <string.h>

struct st_aluno
{
    char matricula[100];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}alunos[100];

int main()
{
    
    
    int n;
    printf("Quantos alunos pretende cadastrar?");
    scanf("%d",&n);
    getchar();
    
    for(int i=0; i<n;i++){
    printf("Informe a matricula do Aluno:");
    fgets(alunos[i].matricula, 100, stdin);

    printf("Informe o nome do Aluno:");
    fgets(alunos[i].nome, 100, stdin);

    printf("Informe o curso do Aluno:");
    fgets(alunos[i].curso, 50, stdin);

    printf("Informe a data de nascimento do Aluno:");
    scanf("%d", &alunos[i].ano_nascimento);
    getchar();
}
    

for(int i=0;i<n;i++){
    printf("%d Dados do Aluno: \n", (i+1));
    printf("Matricula: %s\n",alunos[i].matricula);
    printf("Nome: %s\n",alunos[i].nome);
    printf("Curso: %s\n",alunos[i].curso);
    printf("Ano de Nascimento: %d\n",alunos[i].ano_nascimento);
}
    return 0;
}