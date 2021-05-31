#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {} Pessoa;

int main (){

    int a[500][100];
    int n, d, n1, d1, boolean;

    while (1){

    scanf("%d%d", &n, &d);

    if (n == 0 && d == 0)
        break;
    
    if (n == 0 || d == 0){
        printf("no\n");
        continue;
    }
        

    boolean = 1;

    for (d1 = 0; d1 < d; d1++){
        
        for (n1 = 0; n1 < n; n1++){
            
            
            scanf("%d", &a[d1][n1]);

        }

    }

    for (n1 = 0; n1 < n; n1++){
        boolean = 1;
        for (d1 = 0; d1 < d; d1++){
            

            if (a[d1][n1] < 1)
            {
                
                boolean = 0;
                
                break;
            }

            
            
        }

        if (boolean == 1){
            printf("yes\n");
            break;
        }

        
    }

    
    if (boolean != 1)
        printf("no\n");

    }
    return 0;
}