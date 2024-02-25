#include <stdio.h>
#include <stdlib.h>

// Método principal.
int main()
{
    // Variável para armazenar a idade do usuário.
    int idade = 0;

    // Solicita que o usuário digite sua idade.
    printf("Usuário, digite a sua idade: ");

    // Lê a idade fornecida pelo usuário e armazena na variável 'idade'..
    scanf("%d", &idade);

    // Exibe a idade inserida pelo usuário
    printf("Usuário, você tem %d anos", idade);

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
