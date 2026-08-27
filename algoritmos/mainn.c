#include <stdio.h> 
#include "numeros.h" 

int main() { 
    int num;
    int n1, n2; 
    double base;
    int exp; 
    int fat;

    printf("\nDigite um numero inteiro: "); 
    scanf("%d", &num); 
    if (ehPar(num)) { 
        printf("O numero %d eh PAR.\n", num); 
    } else { 
        printf("O numero %d eh IMPAR.\n", num); 
    } 


    printf("\nDigite um numero inteiro: "); 
    scanf("%d", &num);
    if (ehPrimo(num)) { 
        printf("O numero %d eh PRIMO.\n", num); 
    } else { 
        printf("O numero %d NAO eh primo.\n", num); 
    } 


    printf("\nDigite um numero inteiro nao negativo: "); 
    scanf("%d", &num); 
    fat = calcularFatorial(num); 
    if (fat == -1) { 
        printf("Nao existe fatorial de numero negativo!\n"); 
    } else { 
        printf("%d! = %d\n", num, fat);
    } 


    printf("\nDigite o primeiro numero inteiro: "); 
    scanf("%d", &n1);
    printf("Digite o segundo numero inteiro: "); 
    scanf("%d", &n2);
    
    if (n1 == n2) { 
        printf("Os dois numeros sao iguais (%d).\n", n1);
    } else { 
        printf("O maior numero eh: %d\n", encontrarMaior(n1, n2));
    } 


    printf("\nDigite a base: "); 
    scanf("%lf", &base);
    printf("Digite o expoente: "); 
    scanf("%d", &exp); 
    printf("%.2lf ^ %d = %.4lf\n", base, exp, calcularPotencia(base, exp));

    return 0;
}
