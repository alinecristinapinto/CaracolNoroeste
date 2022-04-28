#include <stdio.h>

typedef struct 
{
    int x;
    int y;
} Ponto;

void main(){
    int n;
    Ponto ponto = { 0, 0 };
    
    scanf("%d", &n);
    
    if(n%2 == 0){ // N eh par
        if(n%4==0){ // Verifica se N eh multiplo de 4
            ponto.x = n/2;
        } else {
            ponto.x = -(n + 2)/2;
        }
    } else { // N eh impar
        ponto.y = (n + 1)/2;
        
        if((n+1)%4!=0){ // O sucessor de N nao eh multiplo de 4
            ponto.x = -1;
        }
    }

    printf("( %d, %d )\n", ponto.x, ponto.y);
}
