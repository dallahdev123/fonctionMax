#include<stdio.h>
#include "max.h"

int main(){
    int nbr1,nbr2,saisis=0;
    
        /* code */
        printf("Donner la valeur de a et celle de b: \n");
        saisis=scanf("%d %d",&nbr1,&nbr2);

        if (saisis==2)
        {
            /* code */
            maximum(nbr1,nbr2);
        }else
        {
            printf("Erreur de saisis:\n");
        }
        
            
    return 0;

}