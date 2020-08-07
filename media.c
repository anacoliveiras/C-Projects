#include <stdio.h>
#include <stdlib.h>

int main()
{
    float P1;
    float P2;
    float P3;
    float soma = 0;
    float media = 0;
    printf("Bem vindo!!\n\n\n Suas provas valem até 10 pontos\n\n\n");
    printf("Digite a nota da P1\n");
    scanf("%f", &P1);
    printf("Digite a nota da P2\n");
    scanf("%f", &P2);
    printf("Digite a nota da P3\n");
    scanf("%f", &P3);
    soma = (P1+P2+P3);
    media = (soma/3);
    printf("Sua media foi de %.2f\n",media);
    if(media>=6){
    printf("VOCE FOI APROVADO!!!\n");
       }
       else if (media==5){
            printf("VOCE ESTA DE RECUPERACAO\n");
        }
        else{
            printf("VOCE FOI REPROVADO\n");
        }


    system("pause");
    return 0;

}
