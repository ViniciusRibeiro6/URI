#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calcBase (char *, int, int);
int capicua(char *, int);


int main (){

    int num;
    int b, tamanho, x, mds=0;
    char olar[33];

    scanf("%d", &x);

    while (x--){

        scanf("%d", &num);

        for (b=2; b<=16; b++){
            
            tamanho = calcBase (&olar[0], num, b);
            
            if (capicua(&olar[0], tamanho) == 1){
            
                if (mds == 1)
                    printf(" ");
                
                printf("%d", b);
                mds=1;

            }

        }

        if (mds == 0)
            printf("-1");

        mds = 0;
        printf("\n");
    }

    return 0;
}

int calcBase (char *h, int n, int b){
    int c, i=0;

    while (n >= b){
        c = n%b;
        n = n/b;

        if (c > 9)
            h[i] = c+55;

        else
            h[i] = c+48;

        i++;
    }
    
    if (n > 9)
        h[i] = n+55;

    else
        h[i] = n+48;
    i++;
    h[i] = '\0';

    return i;

}

int capicua(char *j, int t){
    int c, i;

    for(c=0, i=t-1; c<t; c++, i--){
        if (j[c] != j[i])
            break;
    }

    if (c<t)
        return 0;

    else
        return 1;

}
