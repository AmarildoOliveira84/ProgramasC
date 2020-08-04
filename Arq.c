#include <stdio.h>

int main()
{

    FILE *arq;
    arq = fopen("arquivo.txt", "r");
    char c;

    if (arq)
    {
        printf("Encontrei o arquivo\n");
        while ((c=getc(arq)) != EOF)
        {

            printf("%c",c);
        }
    }
    else
    {
        printf("Nao encontrei o arquivo");
    }

    fclose(arq);

    return 0;
}