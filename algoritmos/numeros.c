#include "numeros.h"

int ehPar(int n) { 
    return n % 2 == 0; 
}

int ehPrimo(int n) { 
    if (n <= 1) return 0; 
    int i;
    for (i = 2; i * i <= n; i++) { 
        if (n % i == 0) { 
            return 0; 
        } 
    } 
    return 1; 
}


int calcularFatorial(int n) { 
    if (n < 0) return -1; 
    int fat = 1; 
    int i;
    for (i = 1; i <= n; i++) { 
        fat *= i; 
    } 
    return fat; 
}

int encontrarMaior(int a, int b) { 
    if (a > b) { 
        return a; 
    } 
    return b; 
}

double calcularPotencia(double base, int expoente) { 
    double resultado = 1.0; 
    int expAbsoluto = expoente < 0 ? -expoente : expoente; 
    int i;
    for (i = 0; i < expAbsoluto; i++) { 
        resultado *= base; 
    } 
    if (expoente < 0) { 
        return 1.0 / resultado; 
    } 
    return resultado; 
}
