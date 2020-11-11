#include<stdio.h>
#include "max.h"

int maximum(int a, int b){
     int max;
            /* code */
            if (a>b)
            {
                max=a;
            }else{
                max=b;
            }
            printf("Le maximum est:%d\n",max); 
    return 0;

}