#include <stdio.h>

int main() {
    int ano;

    printf("digite o ano para verificar os eventos: ");
    scanf("%d", &ano);

    if (ano >= 1800 && ano <= 2022) {
        if (ano == 1940 || ano == 1944 || ano == 2020) {
            printf("devido a eventos historicos, nao houve jogos olimpicos de verao ou copa do mundo em %d.\n", ano);
        } else if ((ano >= 1896 && ano <= 2022 && ano % 4 == 0) || (ano == 2022)) {
            printf("os jogos olimpicos de verao ocorreram no ano de %d.\n", ano);
        } else if (ano >= 1930 && ano <= 2022 && (ano % 4 == 2 || ano == 1930)) {
            printf("a copa do mundo de futebol ocorreu no ano de %d.\n", ano);
        } else {
            printf("nao houve jogos olimpicos de verao ou copa do mundo no ano de %d.\n", ano);
        }
    } else {
        printf("ano fora do intervalo valido (1800 a 2022).\n");
    }

    return 0;
}
