#include <stdio.h>

int main() {
    int a, b;
    
    // Lê os dois valores inteiros
    scanf("%d", &a);
    scanf("%d", &b);
    
    // Verifica se os valores são iguais
    if (a == b) {
        printf("Os valores lidos sao iguais\n");
    } else {
        int maior, menor;
        
        // Encontra o maior valor
        if (a > b) {
            maior = a;
            menor = b;
        } else {
            maior = b;
            menor = a;
        }
        
        // Verifica se o maior valor é múltiplo do menor
        if (maior % menor == 0) {
            printf("%d eh maior que %d\n", maior, menor);
            printf("%d eh multiplo de %d\n", maior, menor);
        } else {
            printf("%d eh maior que %d\n", maior, menor);
            printf("%d nao eh multiplo de %d\n", maior, menor);
        }
    }
    
    return 0;
}
