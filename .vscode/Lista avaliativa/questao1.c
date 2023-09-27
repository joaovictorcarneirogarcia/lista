#include <stdio.h>

int main() {
    int ano;
    
    // Solicita ao usuário um ano como entrada
    printf("Digite o ano (1800 a 2022): ");
    scanf("%d", &ano);

    // Lista de anos em que ocorreram os Jogos Olímpicos de Verão
    int jogos_olimpicos_verao[] = {1896, 1900, 1904, 1908, 1912, 1920, 1924, 1928, 1932, 1936, 1948, 1952, 1956, 1960, 1964, 1968, 1972, 1976, 1980, 1984, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016};
    int num_jogos_olimpicos = sizeof(jogos_olimpicos_verao) / sizeof(jogos_olimpicos_verao[0]);

    // Lista de anos em que ocorreu a Copa do Mundo de Futebol
    int copa_do_mundo[] = {1930, 1934, 1938, 1950, 1954, 1958, 1962, 1966, 1970, 1974, 1978, 1982, 1986, 1990, 1994, 1998, 2002, 2006, 2010, 2014, 2018};
    int num_copa_do_mundo = sizeof(copa_do_mundo) / sizeof(copa_do_mundo[0]);

    // Verifica se o ano está na lista dos Jogos Olímpicos de Verão
    int encontrou_jogos_olimpicos = 0;
    for (int i = 0; i < num_jogos_olimpicos; i++) {
        if (ano == jogos_olimpicos_verao[i]) {
            encontrou_jogos_olimpicos = 1;
            break;
        }
    }

    // Verifica se o ano está na lista da Copa do Mundo de Futebol
    int encontrou_copa_do_mundo = 0;
    for (int i = 0; i < num_copa_do_mundo; i++) {
        if (ano == copa_do_mundo[i]) {
            encontrou_copa_do_mundo = 1;
            break;
        }
    }

    // Imprime a mensagem apropriada
    if (encontrou_jogos_olimpicos) {
        printf("Os Jogos Olímpicos de Verão ocorreram no ano de %d.\n", ano);
    }
    if (encontrou_copa_do_mundo) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }
    if (!encontrou_jogos_olimpicos && !encontrou_copa_do_mundo) {
        printf("Não houve Jogos Olímpicos de Verão ou Copa do Mundo no ano de %d.\n", ano);
    }

    return 0;
}
