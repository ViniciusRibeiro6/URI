#include <stdio.h>
#include <string.h>

int main (){
    double X, T, E, Q, H, S, W, res = (double) 0;
    
    X = (double) 1/64;
    T = (double) 1/32;
    S = (double) 1/16;
    E = (double) 1/8;
    Q = (double) 1/4;
    H = (double) 1/2;
    W = (double) 1;

    char entrada[201];
    int cont, certo;

    while ((strcmp (gets(entrada), "*")) != 0){
    cont = 0;
    certo = 0;
    while (1){ 

        if (entrada[cont] == '/'){
            cont++;

            if (entrada == '\0')
                break;

            while (entrada[cont] != '/'){
                
                if (entrada[cont] == 'X')
                    res += X;
                
                else if (entrada[cont] == 'T')
                    res += T;

                else if (entrada[cont] == 'E')
                    res += E;

                else if (entrada[cont] == 'Q')
                    res += Q;
                
                else if (entrada[cont] == 'H')
                    res += H;
                else if (entrada[cont] == 'W')
                    res += W;
                else if (entrada[cont] == 'S')
                    res += S;
                
                cont++;
            }

        if (res == 1.0)
                certo++;
        
        res = 0;
        
        if (entrada [cont+1] == '\0')
            break;
        
        }
    } 
    printf("%d\n", certo);
    } 
    
    return 0;
}
