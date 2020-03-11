#include "permutations.hpp"
#include "helpers.hpp"

  
int permutations::findMobile(int perms[], bool direction[], int n) 
{ 
    int prev = 0; 
    int mobile = 0; 
    for (int i = 0; i < n; i++) 
    { 
        if (direction[perms[i]-1] == RIGHT && i!=0){ 
            if (perms[i] > perms[i-1] && perms[i] > prev){ 
                mobile = perms[i]; 
                prev = mobile; 
            } 
        } 

        if (direction[perms[i]-1] == LEFT && i!=n-1) { 
            if (perms[i] > perms[i+1] && perms[i] > prev){ 
                mobile = perms[i]; 
                prev = mobile; 
            } 
        } 
    } 
  
    if (mobile == 0 && prev == 0){
        return 0; 
    }
    else{
        return mobile; 
    }
} 
  
  
int permutations::findLargestMobile(int* perms, int n, int mobile){
    for (int i = 0; i < n; i++){
        if (perms[i] == mobile){
           return i + 1;
        }
    }
    return -1;
}
  

std::vector<std::string> permutations::johnsontrotter(int n){ 
    int perms[n];
    bool direction[n];
    std::vector<std::string> totalPermutations;
    std::stringstream currentPermuation;

    for (int i = 0; i < n; i++){ 
        perms[i] = i + 1; 
        std::cout << perms[i]; 
    }
    std::cout << " ";
    
    for (int i = 0; i < n; i++){
        direction[i] =  RIGHT; 
    }
  
    for (int i = 1; i < helpers::factorial(n); i++){
        currentPermuation.clear();
        int mobile = findMobile(perms, direction, n); 
        int pos = findLargestMobile(perms, n, mobile); 

        if (direction[perms[pos - 1] - 1] ==  RIGHT){
            std::swap(perms[pos-1], perms[pos-2]); 
        }
    
        else if (direction[perms[pos - 1] - 1] == LEFT){
            std::swap(perms[pos], perms[pos-1]); 
        }
    
        for (int i = 0; i < n; i++){ 
            if (perms[i] > mobile) { 
                if (direction[perms[i] - 1] == LEFT){
                    direction[perms[i] - 1] = RIGHT; 
                }
                else if (direction[perms[i] - 1] == RIGHT){
                    direction[perms[i] - 1] = LEFT; 
                }
            } 
        } 
    
        for (int i = 0; i < n; i++){
            std::cout << perms[i]; 
        }
        std::cout << " ";
    }
    std::cout << std::endl;
    return totalPermutations;
} 
  
