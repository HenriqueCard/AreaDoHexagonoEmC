#include <stdio.h>//
#include<stdlib.h>//
#include<math.h>//bibliotecas
void calc_hexa(float L, float* area, float* perimetro);//prototipo da fun�ao

int main()//fun�ao principal
{
	float lado=0;//
	float perimetro;//declara��o das vari�veis
	float area;//

	printf("Digite um valor para o lado do hexagono e obtenha a area e o perimetro!\n\n ");//imprime msg na tela

	calc_hexa(lado,&area,&perimetro);//chamando a fun��o
	
	
	printf("valor da area= %.2f\n ", area);//imprimindo resultados calculados pela fun��o
	printf("valor do perimetro= %.2f\n\n ", perimetro);//imprimindo resultados calculados pela fun��o
	
		
		while (lado >= 0)//estrutura de repeti��o
		{
			calc_hexa(lado, &area, &perimetro);//chamando a fun��o

			printf("valor do area= %.2f\n ",area);//imprimindo resultados calculados pela fun��o
			printf("valor da perimetro= %.2f\n\n ", perimetro);//imprimindo resultados calculados pela fun��o
		}
		
	system("pause");//pausa a tela
	return 0;
}
void calc_hexa(float L, float* area, float* perimetro)//fun��o que faz os calculos e � chamada na main
{
		printf("valor do lado:");//pede ao usu�rio que digite um valor
		scanf_s("%f", &L);//leitura do valor informado pelo usu�rio
		*perimetro = 6 * L;//calculo do perimetro
		*area = (3 * pow(L, 2) * sqrt(3)) / 2;//f�rmula que calcula a �rea
}
