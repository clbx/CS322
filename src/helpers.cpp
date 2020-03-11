#include "helpers.hpp"

int helpers::factorial(int n){
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int helpers::findInVector(std::vector<int> vec, int n){
    for(int i = 0; i < (int)vec.size(); i++){
        if(vec[i] == n){
            return i;
        }
    }
    return -1;
}