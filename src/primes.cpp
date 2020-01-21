#include "primes.hpp"


//This one is slower, but technically uses less memory
std::vector<int> primes::sieve(int n){
    //Initlize List
    std::vector<int> primes;
    for(int i = 0; i < n; i++){
        primes.push_back(i);
    }

    for (int i = 2; i <= n; i++){
        if(!std::count(primes.begin(),primes.end(),i)){
            continue;
        }
        for (int j = i + i; j <= n; j += i){
            primes.erase(std::remove(primes.begin(), primes.end(), j), primes.end());
        }
    }

    return primes;
}