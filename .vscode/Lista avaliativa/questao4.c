#include <stdio.h>

int main() {
    char nivel;
    float salario, aumento = 0.0;

    printf("Digite o nível de experiência do funcionário (a, b ou c): ");
    scanf(" %c", &nivel);

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario);

    switch (nivel) {
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            break;
        default:
            printf("Nível de experiência inválido.\n");
            return 1; // Encerra o programa com código de erro
    }

    float salarioAtualizado = salario + aumento;
    printf("R$ %.2f\n", salarioAtualizado);

    return 0;
}
