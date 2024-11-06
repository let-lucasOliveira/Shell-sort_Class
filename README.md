# Shell Sort

## Aqui é mostrado o código do algoritmo de ordenação Shell Sort.
### Feito em lingagem C.

## O algorimo foi mostrado na aula de Estrutura de Dados, Fatec - Santana de Parnaíba.
### O código foi escrito por mim, sob a orientaçao do professor e coordenador do curso de Análise e Desenvolvimento de sistema, Alexandre Cassiano.
    
## Resultado:
```c
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
