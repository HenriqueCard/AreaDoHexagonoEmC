#include <stdio.h>//
#include<stdlib.h>//
#include<math.h>//bibliotecas
void calc_hexa(float L, float* area, float* perimetro);//prototipo da funçao

int main()//funçao principal
{
	float lado=0;//
	float perimetro;//declaração das variáveis
	float area;//

	printf("Digite um valor para o lado do hexagono e obtenha a area e o perimetro!\n\n ");//imprime msg na tela

	calc_hexa(lado,&area,&perimetro);//chamando a função
	
	
	printf("valor da area= %.2f\n ", area);//imprimindo resultados calculados pela função
	printf("valor do perimetro= %.2f\n\n ", perimetro);//imprimindo resultados calculados pela função
	
		
		while (lado >= 0)//estrutura de repetição
		{
			calc_hexa(lado, &area, &perimetro);//chamando a função

			printf("valor do area= %.2f\n ",area);//imprimindo resultados calculados pela função
			printf("valor da perimetro= %.2f\n\n ", perimetro);//imprimindo resultados calculados pela função
		}
		
	system("pause");//pausa a tela
	return 0;
}
void calc_hexa(float L, float* area, float* perimetro)//função que faz os calculos e é chamada na main
{
		printf("valor do lado:");//pede ao usuário que digite um valor
		scanf_s("%f", &L);//leitura do valor informado pelo usuário
		*perimetro = 6 * L;//calculo do perimetro
		*area = (3 * pow(L, 2) * sqrt(3)) / 2;//fórmula que calcula a área
}
