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

std::vector<int> primes::run(int n){
    std::cout << "Prime Numbers:" << std::endl;
    //Sieve Algorithm
    std::cout << "Seive Algorithm (Slow)" << std::endl;
    auto start = std::chrono::steady_clock::now();
    std::vector<int> primes = sieve(n);
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    std::cout << "Recursive Execution Time: " << std::chrono::duration <double, std::nano> (diff).count()  << " ns" << std::endl;
    
    
    std::cout << primes.size() << " primes between 0 and "<< n << ": ";
    for (auto const& c : primes){
        std::cout << c << ' ';
    }
    std::cout << std::endl << "===================" << std::endl;
    return primes;

}