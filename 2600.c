#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int organiza (int *);

int main (){

    int i, dado[6], vf, n;

    scanf("%d", &n);

    while(n>0){

        vf=0;

        for(i=0; i<6; i++)
            scanf("%d", &dado[i]);

        if (dado[0] + dado[5] == 7 && dado[1] + dado[3] == 7 && dado[2] + dado[4] == 7){
            
            organiza(&dado[0]);
            vf = 1;
            for (i=0; i<6; i++){
                if (dado[i] != i+1){
                    vf = 0;
                    break;
                }
            }

        }

        if (vf == 0)
            printf("NAO\n");

        else
            printf("SIM\n");

        n--;
    }
    return 0;

}

int organiza (int *dado){

    int i, c, reserva;

    for (i=0; i<6; i++){
        for (c=i; c<6; c++){

            if (dado[i] > dado[c]){
                reserva = dado[i];
                dado[i] = dado[c];
                dado[c] = reserva;

            }
        }
    }



}