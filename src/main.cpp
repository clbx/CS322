#include "euclidean.hpp"
#include <stdio.h>

int main(int argc, char** argv){
    euclidian euc;
    int gcd = euc.gcdRecursive(48,36);
    printf("%d\n",gcd);
}