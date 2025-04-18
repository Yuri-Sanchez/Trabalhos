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

float calcularIMC(float p, float a){
    return p / (a * a);
}

float calcularPorcentagem(int valor, int total){
    return (valor * 100.0) / total;
}


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int qtd;
    float peso, altura, imc;
    int abaixo = 0, normal = 0, sobrepeso = 0;
    int obesidade_i = 0, obesidade_ii = 0, obesidade_iii = 0;

    printf("Quantidade de pacientes a serem avaliados: ");
    scanf("%d", &qtd);

    for(int i = 1; i <= qtd; i++){
        printf("\n%d° paciente\n", i);
        printf("Peso (kg): ");
        scanf("%f", &peso);
        printf("Altura (m): ");
        scanf("%f", &altura);

        imc = calcularIMC(peso, altura);
        printf("IMC do paciente: %.2f\n", imc);

        if(imc < 18.5) {
            printf("Abaixo do peso!\n");
            abaixo++;
        }
        else if(imc < 25) {
            printf("Peso normal!\n");
            normal++;
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
    printf("Abaixo do peso: %d(%.1f%%)\n", abaixo, calcularPorcentagem(abaixo, qtd));
    printf("Peso normal: %d(%.1f%%)\n", normal, calcularPorcentagem(normal, qtd));
    printf("Sobrepeso: %d(%.1f%%)\n", sobrepeso, calcularPorcentagem(sobrepeso, qtd));
    printf("Obesidade grau I: %d(%.1f%%)\n", obesidade_i, calcularPorcentagem(obesidade_i, qtd));
    printf("Obesidade grau II: %d(%.1f%%)\n", obesidade_ii, calcularPorcentagem(obesidade_ii, qtd));
    printf("Obesidade grau III: %d(%.1f%%)\n", obesidade_iii, calcularPorcentagem(obesidade_iii, qtd));

    return 0;
}

