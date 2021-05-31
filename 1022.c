#include <stdio.h>

typedef struct 
{
    int d, n;
} tda;

tda simplificaF(tda);
void ignoraChar (int);

int main (){

    tda f1, f2;
    int cont;
    char o;
    
    scanf("%d", &cont);
    
    while (cont > 0){
        scanf("%d", &f1.n);
        ignoraChar (3);
        scanf("%d", &f1.d);
        ignoraChar (1);
        scanf("%c", &o);
        ignoraChar (1);
        scanf("%d", &f2.n);
        ignoraChar (3);
        scanf("%d", &f2.d);

        switch (o)
        {
        case '+':
            f1.n = f1.n*f2.d + f2.n*f1.d;
            f1.d = f1.d*f2.d;
            break;

        case '-':
            f1.n = f1.n*f2.d - f2.n*f1.d;
            f1.d = f1.d*f2.d;

            break;

        case '*':
            f1.n = f1.n*f2.n;
            f1.d = f1.d*f2.d;

            break;

        case '/':
            f1.n = f1.n*f2.d;
            f1.d = f2.n*f1.d;
            break;
        
        }

        f2 = simplificaF(f1);

        printf("%d/%d = %d/%d\n", f1.n, f1.d, f2.n, f2.d);
        cont--;
    }
    return 0;
}

void ignoraChar (int a){
    int i;

    for (i = 0; i<a; i++)
        getchar();

}

tda simplificaF(tda f)
{
    int menor=1, cont=2, n=0, d=0;

    if (f.d < 0){
        f.d = f.d*(-1);
        d=1;
    }

    if (f.n < 0){
        f.n = f.n*(-1);
        n=1;
    }

    if (f.n == f.d)
    {   
        if (d == 1)
            f.d = f.d*(-1);

        if (n == 1) 
            f.n = f.n*(-1);
        
        n=f.n;
        f.n = f.n/f.d;
        f.d = f.d/n;
        return f;
    }

    else if (f.n > f.d)
        menor = f.d;

    else
        menor = f.n;

    while (menor >= cont)
    {   
        if (f.d%cont == 0 && f.n%cont == 0)
        {   f.n = f.n/cont;
            f.d = f.d/cont;
            menor = menor/cont;
        }
        else
            cont++;
    }

    if (d == 1)
        f.d = f.d*(-1);

    if (n == 1) 
        f.n = f.n*(-1);


return f;

}