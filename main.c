#include <stdio.h>
#include <stdlib.h>

// Algoritimo Shell Sort

int main()
{
    // Parte inicial, vetor com uma lista de numeros, desorganizados
    int vet[] = {99, 6, 3, 2, 21, 1, 22, 65, 4, 7, 85, 5, 8, 10, 11};
    int i, c = 0, q, aux, n = sizeof(vet) / sizeof(vet[0]); // n é a quantidade de itens do vetor

    // Primeira parte do codigo, h é o tamanho do salto.
    int h = n / 2;
    for (i = 0; i < h; i++)
    {
        if (vet[i] > vet[i + h])
        {
            aux = vet[i];
            vet[i] = vet[i + h];
            vet[i + h] = aux;
        }
    } // Verifica se um numero é maior que o outro e faz a troca

    // Segunda parte do codigo, onde o tamanho do salto é dividido por 2
    h = h / 2;
        for (i = 0; i < n - h; i++)
        {
            if (vet[i] > vet[i + h])
            {
                aux = vet[i];
                vet[i] = vet[i + h];
                vet[i + h] = aux;
            }
        } // Faz a verificação se um numero é maior que o outro e os troca.

    // Terceira parte do codigo, o tamando do salto é dividido por 2
    h = h / 2, c = 0;
    while (c < n / 2)
    {
        c = c + 1;
        for (i = 0; i < n - h; i++)
        {
            if (vet[i] > vet[i + h])
            {
                aux = vet[i];
                vet[i] = vet[i + h];
                vet[i + h] = aux;
            }
        } // Faz a verificação se um numero é maior que o outro pulando de um por um
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
};