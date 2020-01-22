#include "euclidean.hpp"
#include "primes.hpp"
#include <iostream>


int main(int argc, char** argv){
    euclidean euc;
    primes p;

    int x,y;
    euc.diophantine(3,6,8,x,y);

    return 0;
}

/*
start = std::chrono::steady_clock::now();
//run algorithm
end = std::chrono::steady_clock::now();
diff = end - start;
std::cout << "Execution Time: " << std::chrono::duration <double, std::nano> (diff).count()  << " ns" << std::endl;
*/


