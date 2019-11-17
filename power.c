#include <stdio.h>
#include "mymath.h"

#define eul 2.71828

double Pow(double x, int y){
    double res = 1;
     if (y < 0){
        x = 1/x;
        y = -1*y;
        Pow(x,y);
    }
    if (y == 0){
        return 1;
    }
    if (y > 0){
        for (int i = 0; i < y; i++){
            res*=x;
        }
    }
   
    return res;
}

double Exp(int x){
    return (Pow(eul, x));
}


