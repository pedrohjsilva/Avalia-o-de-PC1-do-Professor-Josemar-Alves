#include <stdio.h>

void misterio(int vet[], int*a, int* b) //atenção a essa definição da função mistério:
                                        //passamos um vetor, um inteiro multiplicando a e um inteiro multiplicando b
{
    *a = vet[0];                        //atenção a definição dos valores a e b:
    *b = vet[0];                        //eles são dados pelo elemento na posição 0 de nosso vetor
                                        //NOTE QUE  a E b  SÃO PONTEIROS, POIS SÃO DECLARADOS COM O PREFIXO *
    for (int i = 1; i<5; i++){
        if(vet[i] < *a)
            *a=vet[i];                  //dentro desse laço, o programa testa i de 1 à 5 - caso o elemento na posição 
                                        //i seja menor que a, a é atualizado com o valor do vetor na posição atual de i
        else if(vet[i] > *b)
            *b = vet[i];                //nessa parte, caso o elemento na posição i seja maior que b ao fim da verificação de 1 a 5 para i,
                                        //b recebe o valor do vetor na posição i 
    }
}

int main()
{
    int elementos[] = { 6, 2, 3, 4, 5 };
    int x = -1, y = -1;                 //aqui, inicializamos com -1 para x e y, e podemos notar que a e b foram inicializados como
                                        //o vetor na posição 0, ou seja, com 6.
                            
    misterio(elementos, &x, &y);        //note que, ao passarmos x e y como parâmetros, não estamos passando -1 e -1, e sim -1(a) e -1(b).
                                        //ao fim do laço em a, temos que o vetor na posição 1 (valor: 2) é menor que a (valor: 6), logo, a é
                                        //atualizado com o valor do vetor na posição 1, ou seja, 2. 
                                        //b permanece sendo 6
                                        //após o fim da "execução" dessa função, x e y são atualizados com os valores novos. assim,
                                        //agora x vale 2 e y vale 6
    if(x>y)                             //aqui ele testa x em relação a y.
        printf("Ola AAA %d, %d", x, y); //temos x=2 e y=6, como 2 não é maior que 6, isso não satisfaz a condição imposta,
    else
        printf("Ola BBB %d, %d", y, x); //assim esse aqui <<< é o comando executado
}

                                        //ou seja, a saída do programa é:
                                        //Ola BBB 6, 2
