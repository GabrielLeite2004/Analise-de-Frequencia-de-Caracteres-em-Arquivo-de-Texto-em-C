#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Possibilidades 65536 // para acentos, caracteres espciais, etc, caso não fossem, seria 256 possibilidades

int main() {
    setlocale(LC_ALL,"");
    char filename[100],CaractereMaisFrequente,Char;
    int NumeroDeVezes = 0, CharMaisAparece[Possibilidades] = {0};

    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while ((Char = fgetc(file)) != EOF) {CharMaisAparece[Char]++;}

    fclose(file);

    for (int i = 0; i < Possibilidades; i++) {
        if (CharMaisAparece[i] > NumeroDeVezes) {
            NumeroDeVezes = CharMaisAparece[i];
            CaractereMaisFrequente = i;
            }
            }

    printf("O caractere mais frequente é '%c', que aparece %d vezes.\n", CaractereMaisFrequente, NumeroDeVezes);
    return 0;
}
