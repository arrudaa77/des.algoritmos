#include <stdio.h> 
#include <math.h> 
int main(){ 
	float l1, l2, l3, proj, pv; 
	printf("Entre com a primeira nota de laboratorio: "); 
	scanf("%f", &l1);
	
	printf("\nEntre com a segunda nota de laboratorio: "); 
	scanf("%f", &l2); 
	
	printf("\nEntre com a terceira nota de laboratorio: "); 
	scanf("%f", &l3); 
	
	printf("\nEntre com a nota de projeto: "); 
	scanf("%f", &proj); 
	
	printf("\nEntre com a nota da prova: "); 
	scanf("%f", &pv); 
	
	float media_lab = (l1 + l2 + l3) / 3; 
	float media = 0.2 * media_lab + 0.8 * sqrt(proj * pv); 
	
	printf("\nMedia final: %.2f\n", media);
	}
