#include <stdio.h>

int main() {
    int senha_cadastrada, senha_inserida;
    
    // Solicitar a senha inicial
    printf("Digite a senha inicial (4 dígitos): ");
    scanf("%d", &senha_cadastrada);
    
    // Verificar se a senha inicial tem 4 dígitos
    if (senha_cadastrada < 1000 || senha_cadastrada > 9999) {
        printf("Senha inicial deve ter 4 dígitos.\n");
        return 1; // Encerrar o programa com erro
    }
    
    printf("Senha cadastrada: %d\n", senha_cadastrada);
    
    // Solicitar a senha inserida até que seja correta
    do {
        printf("Digite a senha para validar: ");
        scanf("%d", &senha_inserida);
        
        if (senha_inserida == senha_cadastrada) {
            printf("Senha valida!\n");
        } else {
            printf("Senha invalida!\n");
        }
    } while (senha_inserida != senha_cadastrada);
    
    return 0;
}
