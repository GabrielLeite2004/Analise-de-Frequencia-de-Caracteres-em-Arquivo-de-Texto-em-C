# Análise de Frequência de Caracteres em Arquivo de Texto em C

## Descrição
Este projeto em C implementa um programa que analisa a frequência dos caracteres em um arquivo de texto. Ele determina qual caractere aparece mais vezes no arquivo e informa essa informação ao usuário. O programa suporta caracteres especiais e acentos, utilizando um array com 65536 posições para cobrir todas as possibilidades de caracteres.

## Funcionalidades
- **Leitura de Arquivo**: O programa lê o arquivo de texto especificado pelo usuário.
- **Cálculo de Frequência**: Conta a frequência de cada caractere presente no arquivo.
- **Identificação do Caractere Mais Frequente**: Determina qual caractere é o mais frequente no arquivo e quantas vezes ele aparece.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o frequencia_caracteres frequencia_caracteres.c
   ```
2. Execute o programa e insira o nome do arquivo a ser analisado:
   ```bash
   ./frequencia_caracteres
   ```
3. O programa irá exibir o caractere mais frequente e o número de vezes que ele aparece no arquivo.

## Exemplo de Uso
```plaintext
Digite o nome do arquivo: exemplo.txt
O caractere mais frequente é 'e', que aparece 1024 vezes.
```

## Considerações
- O programa utiliza a função `setlocale` para suportar caracteres especiais e acentos.
- A constante `Possibilidades` é definida como 65536 para cobrir todas as possibilidades de caracteres Unicode, garantindo que todos os caracteres, incluindo os especiais, sejam considerados.

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
