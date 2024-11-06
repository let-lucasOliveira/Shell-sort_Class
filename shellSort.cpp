/*
    Name: shellSort.cpp
    Author: Lucas Nascimento Ramos de Oliveira
    Date: nov/06/2024
    Description:
*/

//Sessao de prototipacao
void shellSort(int*, int size);

int size;

//Sessao de importacao das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Variaveis globais
int comp, trocas;

main()
{
    int vet[] = {15,173,19,24,98,75,77,31,19,14,25,98,13,2};
    int i, size;
    size = sizeof(vet) / sizeof(vet[0]);

    printf("Vetor DESORDENADO:\n");
    for(i = 0;i < size; i++)
        printf("%d|", vet[i]);

    shellSort(vet, size);

    printf("\nVetor ORDENADO pelo Shell sort:\n");
    for(i = 0;i < size; i++)
        printf("%d|", vet[i]);

    printf("\n ====>%d<==== quantidades de comparacoes",comp);
    printf("\n ====>%d<==== quantidades de trocas",trocas);
}// Fim do main

// Implementacao do algoritmo do metodo shell sort
void shellSort(int *vet, int size){
    int i, j, value;

    int h = 1; //Valor do salto
    while(h < size){
        h = 3 * h + 1;
        printf("\nTamanho do salto: %d", h);
    }
    while(h > 0){
        for(i = h; i < size; i++){
            // trocas++;
            value = vet[i];
            j = i;
            comp++;
            while(j > h-1 && value <= vet[j - h]){
                trocas++;
                vet[j] = vet[j - h];
                j = j - h;
            }
            vet[j] = value;
        }
        h = h/2;
    }
}