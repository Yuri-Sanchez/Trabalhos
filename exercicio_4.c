/*Exercício 8:
Uma clínica de nutrição deseja automatizar a análise do Índice de Massa Corporal (IMC) de seus pacientes, com o objetivo de obter um relatório do número de pessoas em cada faixa de classificação.
O IMC (Índice de Massa Corporal) é um critério da Organização Mundial da Saúde (OMS) utilizado para avaliar a condição de peso de uma pessoa adulta. A fórmula para o cálculo é:
IMC = peso / (altura × altura)
O programa deverá:
1.	Solicitar ao usuário a quantidade de pacientes a serem avaliados.
2.	Para cada paciente, solicitar o peso e a altura.
3.	Calcular o IMC com base nos dados fornecidos.
4.	Classificar cada paciente de acordo com a seguinte tabela:
IMC < 18,5           Abaixo do peso
18,5 <= IMC < 25     Peso normal
25<= IMC < 30        Sobrepeso
30<= IMC < 35        Obesidade grau I
35 <= IMC < 40       Obesidade grau II
IMC >= 40            Obesidade grau III    
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int qtd_pacientes;
    float peso, altura, imc;
    int abaixo_peso = 0, peso_normal = 0, sobrepeso = 0;
    int obesidade_i = 0, obesidade_ii = 0, obesidade_iii = 0;

    printf("Quantidade de pacientes a serem avaliados: ");
    scanf("%d", &qtd_pacientes);

    for(int i = 1; i <= qtd_pacientes; i++){
        printf("\n%d° paciente\n", i);
        printf("Peso (kg): ");
        scanf("%f", &peso);
        printf("Altura (m): ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);
        printf("IMC do paciente: %.2f\n", imc);

        if(imc < 18.5) {
            printf("Abaixo do peso!\n");
            abaixo_peso++;
        }
        else if(imc < 25) {
            printf("Peso normal!\n");
            peso_normal++;
        }
        else if(imc < 30) {
            printf("Sobrepeso!\n");
            sobrepeso++;
        }
        else if(imc < 35) {
            printf("Obesidade grau I!\n");
            obesidade_i++;
        }
        else if(imc < 40) {
            printf("Obesidade grau II!\n");
            obesidade_ii++;
        }
        else {
            printf("Obesidade grau III!\n");
            obesidade_iii++;
        }
    }

    printf("\nRelatório Final:\n");
    printf("----------------\n");
    printf("Abaixo do peso: %d paciente(s)\n", abaixo_peso);
    printf("Peso normal: %d paciente(s)\n", peso_normal);
    printf("Sobrepeso: %d paciente(s)\n", sobrepeso);
    printf("Obesidade grau I: %d paciente(s)\n", obesidade_i);
    printf("Obesidade grau II: %d paciente(s)\n", obesidade_ii);
    printf("Obesidade grau III: %d paciente(s)\n", obesidade_iii);

    return 0;
}

