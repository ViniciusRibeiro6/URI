#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main (){

char umega[15];
int cont = 13, dez = 1, numero = 0, numfixo = 0, vezes;

scanf("%d", &vezes);

while (vezes > 0){

scanf("%14s", umega);

while (cont >= 0) {/* Sempre feita de forma decrescente, pois a leitura da string precisa ser nesse sentido


        */

    if (umega[cont] >= '0' && umega[cont] <= '9'){

    numero = umega[cont]-48;//converte para decimal
    numero = numero*dez;//sobe a casa decimal caso seja necessario
    dez = dez*10;//sobe casa decimal
    numfixo = numero+numfixo;//soma dos valores

        }

    else dez = 1; /* sempre que sair da continuidade de numeros como entrada, o "dez" volta a ser 1, fazendo com que a proxima
    ***leitura coloque a casa decimal em seu devido local
    ***separa os numeros a cada caracter
    */
    cont --;
}
printf("%i\n", numfixo);
numfixo = 0;
cont = 13;
vezes--;
}

return 0;
}
