#include <stdio.h>

int main() {
    int numero, digito, soma = 0;
    
    // Solicitar ao usuário um número
    printf("Digite um numero (0 a 1000000000): ");
    scanf("%d", &numero);
    
    // Verificar se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }
    
    // Calcular a soma dos dígitos do número
    int original = numero; // Salvar uma cópia do número original
    while (numero > 0) {
        digito = numero % 10; // Obtém o último dígito
        soma += digito;      // Adiciona o dígito à soma
        numero /= 10;        // Remove o último dígito
    }
    
    // Imprimir a soma dos dígitos
    printf("A soma dos algarismos de %d eh %d\n", original, soma);
    
    return 0;
}
