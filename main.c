#include <stdio.h>
#include "mymath.h"

int main(){
    double in;
    printf("Enter a real number\n");
    scanf("%lf", &in);
   
   // First Function
    int n = (int)in;
    double ans = Exp(n) + Pow(in, 3) -2;
    printf("f(x) = e^(x) +(x)^3 -2 , at the point %.4lf is %.4lf\n\n", in, ans);
    
   // Second Function
    ans = 3*in + 2*Pow(in, 2);
    printf("f(x) = 3x +2x^2, at the point %.4lf is %.4lf\n\n", in, ans);

   // Third Function
    ans = (4*Pow(in, 3))/5 -2*in; 
    printf("f(x) = (4x^3)/5 -2x, at the point of %.4lf is %.4lf\n\n", in, ans);
    
    return 0;
}
