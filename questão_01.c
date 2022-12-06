#include <stdio.h>                              //aqui, inserimos a biblioteca que garante que o programa execute adequadamente os
                                                //os comandos de entrada e saída padrão
void misterio(int vet[], int*a, int* b)         //aqui definimos a função mistério. note que ela recebe por parâmetro um vetor e dois inteiros
                                                //que serão ponteiros para a e b respectivamente
{
    *a = vet[0];                                //aqui a função define a apontando para o vetor que a função receber na posição 0
    *b = vet[0];                                //e b apontando para a mesma posição desse vetor
    for (int i = 1; i<5; i++){                  //o programa inicia i com 1 e testa até 5
        if(vet[i] < *a)                         //caso o vetor na posição i seja menor que o elemento apontado por a,
            *a=vet[i];                          //a é atualizado com o valor desse elemento
        else if(vet[i] > *b)                    //caso contrário, se esse vetor na posição i for maior que o elemento apontado por b,
            *b = vet[i];                        //b é atualizado com esse valor
    }
}

int main()                                      //aqui "chamamos" a função principal do nosso programa
{
    int elementos[] = { 6, 2,3, 4, 5 };         //declaramos e iniciamos o vetor elementos
    int x = -1, y = -1;                         //e as variáveis x e y
    misterio(elementos, &x, &y);                //aqui, "chamamos" misterio passando elementos como parâmetro,
                                                //e atualizando x e y com nossos ponteiros
                                                //o programa irá testar e encontrar 2>*a, pois a inicia valendo 0
                                                //depois disso a=2 será o menor de todos, e a valerá 2 ao final
                                                //o programa testa, então, 6>*b, e b=6 passa a ser o maior valor
                                                //ao fim da função, passamos a para x e b para y
    if(x>y)                                     //o programa testa x>y
        printf("Ola AAA %d, %d", x, y);
    else
        printf("Ola BBB %d, %d", y, x);         //assim, 2>6 retorna falso, então essa é a saída de nosso programa:
                                                //[Ola BBB 6, 2]
}
