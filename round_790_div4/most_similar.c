#include <stdio.h>
#include <stdlib.h>

int main() {

    char palavras[51][9];
    int vezes, i1, i2, qtd_palavras, qtd_letras, diferenca, soma_diferenca;

    scanf("%d", &vezes);

    for (vezes; vezes > 0; vezes--) {

        scanf("%d%d", &qtd_palavras, &qtd_letras);


        for (i1 = 0; i1 < qtd_palavras; i1++) { // Algo de errado aqui
            for (i2 = 0; i2 < qtd_letras; i2++) scanf("%c", &palavras[i1][i2]);
        }

        


    }


    return 0;
}
