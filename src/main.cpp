#include "euclidean.hpp"
#include "primes.hpp"
#include "permutations.hpp"
#include "sorts.hpp"
#include <iostream>


int main(int argc, char** argv){
    sorts s;
    int arr[] = {5, 6, 9, 2, 3, 1, 10, 4, 7, 8};
    s.heapSort(arr,10);
    for(int i = 0; i < 10; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


