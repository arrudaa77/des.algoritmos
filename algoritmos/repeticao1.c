#include <stdio.h>

int main() {
    int n;
    int i;
    int total_for = 0;
    int total_while = 0;

    printf("Entre com a quantidade de numeros: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        total_for += i;
    }
    printf("total: %d\n", total_for);

    i = 0; 
    while(i < n) {
        total_while += i;
        i++;
    }
    printf("total: %d\n", total_while);
}
