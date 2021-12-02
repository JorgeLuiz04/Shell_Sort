#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[] = {54, 26, 93, 17, 77, 31, 44, 55, 20}; // Lista de Numeros
    int n = sizeof(vet) / sizeof(vet[0]);             // Numero de Elementos
    int h, num = 1, i, aux, j = 1;

    h = n / num;
    num = num * 2;

    while (j == 1) // Esperando j ser diferente de 1
    {
        if (h != 0) // Parte principal do algoritmo
        {

            while (i < n - h) // Se i for maior que o numero de elementos na lista menos o tamanho do salto.
            // (Quando o tamanho do salto for maior que o numero de itens, ele para)
            {
                if (vet[i] > vet[i + h])
                {
                    aux = vet[i];
                    vet[i] = vet[i + h];
                    vet[i + h] = aux;
                } // Se um numero for  maior que o o outro, é feita a troca

                i = i + 1;
            }

            i = 0;
            h = h / num;
        }
        else // Ultima parte do codigo onde ele verifica se ficou algum numero fora de ordem
        {
            if (h == 0)
            { // Semelhante a parte principal do algoritmo, realizando trocas
                for (int c = 0; c < n; c++)
                {
                    if (vet[c] > vet[c + (h + 1)])
                    {
                        aux = vet[c];
                        vet[c] = vet[c + (h + 1)];
                        vet[c + (h + 1)] = aux;
                    }
                }
            }
            j = 0;
        }
    }
    // Ultima parte do codigo, print mostrando os valores organizados da lista
    for (int c = 0; c < n; c++)
    {
        printf("%d ", vet[c]);
    }
}