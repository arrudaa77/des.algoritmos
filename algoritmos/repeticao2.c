#include <stdio.h>

int potencia(int x, int  n){
	if(n <= 0)
		return 1;
	else
		return x * potencia(x, n - 1);
}

int main(){
	int x, n;
	printf("Entre com os valores para x e n: ");
	scanf("%d %d", &x, &n);
	int resultado = potencia(x, n);
	printf("%d^%d = %d", x, n, resultado);
}
