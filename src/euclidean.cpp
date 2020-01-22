#include "euclidean.hpp"

int euclidean::gcdRecursive(int a, int b){
    if(b == 0){return a;}
    return gcdRecursive(b,a%b);
}

int euclidean::gcdIterative(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int euclidean::gcdExtended(int a, int b, int *x, int *y){  
    if (a == 0){  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
  
    int x1, y1; 
    int gcd = gcdExtended(b%a, a, &x1, &y1);  
    
    *x = y1 - (b/a) * x1;  
    *y = x1;  
  
    return gcd;
}

void euclidean::diophantine(int a, int b, int c, int *x, int *y) {
    int gcd = gcdExtended(a, b, x, y);

    if (c % gcd != 0) {
        *x = 0;
        *y = 0;
        std::cout << "No solution" << std::endl;
        return;
    }

    c = c / gcd;

    *x = *x * c; 
    *y = *y * c;
}