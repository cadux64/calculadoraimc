#include <stdio.h>
#include <stdlib.h>

int main(){

    //Vari�veis do Sistema
    float altura, peso, imc, media, soma = 0;
    int menu, contador = 0;

    printf("Bem-vindo ao Calculo de IMC 8000 - by Cadu");

    //La�o DO...WHILE para repeti��o do Menu.
    do{

        //Menu do Sistema
        printf("\n\n1 - Calculo de IMC");
        printf("\n2 - Media de IMCs");
        printf("\n3 - Sair\n\n");

        printf("Selecione a opcao: ");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                //Entrada base da altura com valida��o de n�mero para ser maior que 0
                printf("\nDigite sua altura em (m): ");
                scanf("%f", &altura);

                if (altura <= 0) {
                    printf("Altura invalida! Tente novamente.\n");
                    break;
                }

                //Entrada base do peso com valida��o de n�mero para ser maior que 0
                printf("\nDigite seu peso em (kg): ");
                scanf("%f", &peso);

                if (peso <= 0) {
                    printf("Peso invalido! Tente novamente.\n");
                    break;
                }

                //F�rmula do IMC
                imc = peso / (altura * altura);

                printf("\n");

                //Classifica��o com base no valor do IMC j� calculado
                if(imc < 18.5){
                    printf("IMC: %.1f\nClassificacao: Abaixo do peso.\n\n", imc);
                }else if (imc < 25){
                    printf("IMC: %.1f\nClassificacao: Peso normal.\n\n", imc);
                }else if (imc < 30){
                    printf("IMC: %.1f\nClassificacao: Sobrepeso.\n\n", imc);
                }else if (imc < 35){
                    printf("IMC: %.1f\nClassificacao: Obesidade grau 1.\n\n", imc);
                }else if (imc < 40){
                    printf("IMC: %.1f\nClassificacao: Obesidade grau 2.\n\n", imc);
                }else{
                    printf("IMC: %.1f\nClassificacao: Obesidade grau 3.\n\n", imc);
                }

                //F�rmula da M�dia. O IMC � igualado e somado � vari�vel de SOMA. O contador adiciona +1
                soma += imc;
                contador++;
                break;
            case 2:
                //Valida��o de usu�rios
                if (contador == 0) {
                    printf("\nNenhum IMC foi calculado ainda.\n");
                } else {
                    media = soma / contador;
                    printf("\nMedia geral dos IMCs: %.2f\nQuantidade de pessoas: %d\n", media, contador);   //C�lculo da vari�vel MEDIA utilizando a SOMA e o CONTADOR
                }
                break;
            //Bot�o de sa�da
            case 3:
                printf("Adeus! ^-^");
                break;
            //Retorno de caso inv�lido, caso n�o haja uma op��o vi�vel
            default:
                printf("Opcao invalida.\n\n");
                break;
        }
    }while(menu != 3);

    return 0;

}
