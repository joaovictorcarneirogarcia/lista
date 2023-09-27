#include <stdio.h>

int main() {
    int ano;
    
    printf("Digite um ano (1800 a 2022): ");
    scanf("%d", &ano);
    
    if ((ano >= 1896 && ano <= 2020 && (ano % 4 == 0 || ano == 1896 || ano == 1900)) || (ano >= 1930 && ano <= 2018 && (ano % 4 == 0))) {
        // O ano está dentro do intervalo de realização dos Jogos Olímpicos de Verão ou da Copa do Mundo
        if ((ano >= 1896 && ano <= 2020 && (ano % 4 == 0 || ano == 1896 || ano == 1900))) {
            printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.\n", ano);
        }
        if (ano >= 1930 && ano <= 2018 && (ano % 4 == 0)) {
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
        }
    } else {
        printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %d.\n", ano);
    }
    
    return 0;
}
