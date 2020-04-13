#include "euclidean.hpp"
#include "primes.hpp"
#include "permutations.hpp"
#include "sorts.hpp"
#include "dynamic.hpp"
#include <iostream>


int main(int argc, char** argv){
    dynamic d;
    //Fibonacci
    int n = 6;
    printf("Fibonacci Number %d: %d\n",n,d.fibonacci(n));

    //Coin Row Problem
    int coins[7] = {5,32,78,32,22,4,26};
    int max = d.coins(coins,7);
    printf("Coin Row\n");
    printf("Coins: ");
    for(int i = 0; i < 7; i++){
        printf("%d ",coins[i]);
    }
    printf("Max Sum: %d",max);

    //Max Change


    //Robot Coin Collection
    



}


