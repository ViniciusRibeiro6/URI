#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{

char posicao[3], destino[3];

scanf("%2s", posicao);
scanf("%2s", destino);



if ((posicao[1]+2 == destino[1]) && (posicao[0]-1 == destino[0]))
    printf("VALIDO\n");

    else if ((posicao[1]+2 == destino[1]) && (posicao[0]+1 == destino[0]))
        printf("VALIDO\n");

        else if ((posicao[1]+1 == destino[1]) && (posicao[0]+2 == destino[0]))
        printf("VALIDO\n");

            else if ((posicao[1]+1 == destino[1]) && (posicao[0]-2 == destino[0]))
            printf("VALIDO\n");

                else if ((posicao[1]-2 == destino[1]) && (posicao[0]-1 == destino[0]))
                printf("VALIDO\n");

                    else if ((posicao[1]-2 == destino[1]) && (posicao[0]+1 == destino[0]))
                    printf("VALIDO\n");

                    else if ((posicao[1]-1 == destino[1]) && (posicao[0]-2 == destino[0]))
                    printf("VALIDO\n");

                    else if ((posicao[1]-1 == destino[1]) && (posicao[0]+2 == destino[0]))
                    printf("VALIDO\n");



else printf("INVALIDO\n");

	return 0;
}
