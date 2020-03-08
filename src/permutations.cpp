#include "permutations.hpp"
#include "helpers.hpp"

std::vector<int> permutations::johnsontrotter(int n){

    for(int i = 0; i < n; i++){
        perms.push_back(i);
    }
    for(int i = 0 ; i < n; i++){
        direction.push_back(LEFT);
    }
    
    
    for(int i = 0; i < helpers::factorial(n); i++){
        int mobile = findMobile();
        int pos 


    };
    

    return perms;
}


