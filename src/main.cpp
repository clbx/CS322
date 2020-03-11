#include "euclidean.hpp"
#include "primes.hpp"
#include "permutations.hpp"
#include <iostream>


int main(int argc, char** argv){
    permutations p;
    
    p.johnsontrotter(10);


}

/*
start = std::chrono::steady_clock::now();
//run algorithm
end = std::chrono::steady_clock::now();
diff = end - start;
std::cout << "Execution Time: " << std::chrono::duration <double, std::nano> (diff).count()  << " ns" << std::endl;
*/


