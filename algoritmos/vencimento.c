#include <stdio.h>

int main(){
	int atual, vencimento;
	
	printf("Entre com o ano atual: ");
	scanf("%d", &atual);
	
	printf("Entre com o ano de vencimento: ");
	scanf("%d", &vencimento);
	
	if (vencimento < atual)
		printf("Produto vencido. Deve ser descartado\n");
	else
		printf("Produto dentro da validade. Pode ser consumido\n");
}
