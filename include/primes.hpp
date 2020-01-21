#include <vector>
#include <iostream>

class primes{
    public:
        std::vector<int> run(int n);
    private:
        std::vector<int> sieve(int n);
};