#include "euclidean.hpp"
#include "primes.hpp"
#include <iostream>


int main(int argc, char** argv){
    euclidean euc;
    primes p;


    std::vector<int> primes = p.sieve(20);
    std::cout << "Primes between 2 and 20 using Sieve Algorithm: ";
    for (auto const& c : primes){
        std::cout << c << ' ';
    }
    std::cout << std::endl;

    int x, y;
    int gcd = euc.gcdExtended(52345095,452345,&x,&y);
    std::cout << "GCD of 52345095 and 452345: " << gcd << " x: " << x << " y: " << y << std::endl;

    int x1,y1;

    euc.diophantine(1027,712,1,&x1,&y1);
    std::cout << "The diophantine solution of 1027x + 712y = 1 is x:" << x1 << " y:" << y1 << std::endl;

    return 0;
}

/*
start = std::chrono::steady_clock::now();
//run algorithm
end = std::chrono::steady_clock::now();
diff = end - start;
std::cout << "Execution Time: " << std::chrono::duration <double, std::nano> (diff).count()  << " ns" << std::endl;
*/


