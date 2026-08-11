#include <stdio.h> 
int main(){ 
	int hora, minuto, segundo; 
	printf("Entre com a hora no formato HH:MM:SS: "); 
	scanf("%d:%d:%d", &hora, &minuto, &segundo); 
	
	int segs = segundo + minuto * 60 + hora * 60 * 60; 
	printf("\nSe passaram %d segundos desde 00:00:00", segs); 
	
	int meia_noite = 24 * 60 * 60; 
	printf("\nAte a meia noite faltam %d segundos", meia_noite - segs);
	}
