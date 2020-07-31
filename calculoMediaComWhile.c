#include <stdio.h>
float situacao(float* resultado)
{

    if ((*resultado) > 7 && (*resultado) <= 10)
    {
        printf("Aprovado: ");
    } else if ((*resultado) >= 5 && (*resultado) <= 6.99)
    {
        printf("Recuperacao: ");
    }
    else if ((*resultado) >= 0 && (*resultado) <= 4.99)
    {
        printf("Reprovado: ");
    }
    else
    {

        printf("Nota invalida: ");
    }
   
}
int main()
{

    float nota, resultado = 0, media = 0, soma = 0;

    printf("Informe a Nota do Aluno ou clique em 0 para finalizar: ");
    scanf("%f", &nota);

    while (nota != 0)
    {
        media = media + 1;
        soma = soma + nota;
        printf("Informe a Nota do Aluno ou clique em 0 para finalizar: ");
        scanf("%f", &nota);
        resultado = soma / media;
    }
    printf("%.2f", resultado, situacao(&resultado));
    return 0;
}