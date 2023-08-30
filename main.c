#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media, freq;

    printf("\n Informe a nota 1:");
    scanf("%f", &n1);

    printf("\n Informe a nota 2:");
    scanf("%f", &n2);

    printf("\n Informe a nota 3:");
    scanf("%f", &n3);

    printf("\n Informe a nota 4:");
    scanf("%f", &n4);

    printf("\n Informe o percentual de presencas:");
    scanf("%f", &freq);

    media = (n1+n2+n3+n4)/4;

    printf("\n A media e:%.1f", media);

    if(media>=6 && freq>=75) {
        printf("\n Aprovado \n");
    }
    else {
        printf("\n Reprovado \n");
    }
}
