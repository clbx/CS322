#include "euclidean.hpp"
#include "primes.hpp"
#include "permutations.hpp"
#include <iostream>


int main(int argc, char** argv){
    permutations p;

    std::vector<int> permutations = p.johnsontrotter(5);
    for (auto const& c : permutations){
        std::cout << c << ' ';
    }
    std::cout << std::endl;
    return 0;
}

/*
start = std::chrono::steady_clock::now();
//run algorithm
end = std::chrono::steady_clock::now();
diff = end - start;
std::cout << "Execution Time: " << std::chrono::duration <double, std::nano> (diff).count()  << " ns" << std::endl;
*/


