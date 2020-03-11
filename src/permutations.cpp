#include "permutations.hpp"
#include "helpers.hpp"
#include <cstddef>
#include <type_traits>

std::vector<int> permutations::johnsontrotter(int n){

    for(int i = 0; i < n; i++){
        perms.push_back(i);
    }
    for(int i = 0 ; i < n; i++){
        direction.push_back(LEFT);
    }
    
    
    for(int i = 0; i < helpers::factorial(n); i++){
        int mobile = findMobile();
        int pos = helpers::findInVector(perms,mobile);
        if(direction[perms[pos-1]-1] == RIGHT){
            std::swap(perms[pos],perms[pos-1]);
        }
        else if(direction[perms[pos-1]-1] == LEFT){
            std::swap(perms[pos],perms[pos-1]);
        }

        for(int i = 0; i < n; i++){
            if(perms[i] > mobile){
                if(direction[perms[i]-1] == LEFT){
                    direction[perms[i]-1] = RIGHT;
                }
                else if(direction[perms[i]-1] == RIGHT){
                    direction[perms[i]-1] = LEFT;
                }
            }
        }
        for(int i = 0; i < n; i++){
            std::cout << perms[i];
        }



    };
    

    return perms;
}


int permutations::findMobile(){
    int prev = 0;
    int mobile = 0;
    for(int i = 0; i < (int)perms.size(); i++){
        if(direction[perms[i]] == RIGHT && i != 0){
            if(perms[i] > perms[i-1] && perms[i] > prev){
                mobile = perms[i];
                prev = mobile;
            }
        }
        if(direction[perms[i]-1] == LEFT && i != (int)perms.size()-1){
            if(perms[i] > perms[i+1] && perms[i] > prev){
                mobile = perms[i];
                prev = mobile;
            }
        }
    }
    if(mobile == 0 && prev == 0){
        return 0;
    }
    return mobile;
}

