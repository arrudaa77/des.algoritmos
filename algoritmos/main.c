#include <stdio.h>
#include "conversoes.h"
int main() {
	int opcao;
	float valor, resultado;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &valor);
	resultado = celsiusParaFahrenheint(valor);
	printf("%.2f degC eh igual a %.2f degF\n", valor, resultado);
	
	printf("Digite a distancia em metros: ");
	scanf("%f", &valor);
	resultado = metroParaKm(valor);
	printf("%.2f m eh igual a %.4f km\n", valor, resultado);
	
	printf("Digite o tempo em segundos: ");
	scanf("%f", &valor);
	resultado = segundosParaMinutos(valor);
	printf("%.2f s eh igual a %.2f min\n", valor, resultado);
}
