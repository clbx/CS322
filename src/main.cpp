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
    printf("Max Sum: %d\n",max);
    //Min Change
    int change[3] = {1,2,3};
    printf("Minimum Coins: %d\n",d.change(change,3,4));

    //Robot Coin Collection
    int board [5][5] = {{0,0,0,0,0},
                        {1,0,1,0,0},
                        {0,1,0,1,0},
                        {0,1,0,0,0},
                        {1,0,0,0,0}};

    printf("Maximum Robot Coins: %d\n",d.robot(board,5,5));


    //Longest subsequence  
    int arr[] = {10,5,3,12,66,34,95,63};
    n = 8;
    printf("Longest Subsequence: %d\n",d.sequence(arr,n));
}


