#include "euclidean.hpp"

int euclidian::gcdRecursive(int a, int b){
    if(b == 0){return a;}
    return gcdRecursive(b,a%b);
}

int euclidian::gcdIterative(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}