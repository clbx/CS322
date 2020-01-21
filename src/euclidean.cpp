#include "euclidean.hpp"

int euclidian::gcdRecursive(int a, int b){
    if(b == 0){return a;}
    return gcdRecursive(b,a%b);
}

int euclidian::gcdIterative(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int euclidian::run(int a, int b){
    std::cout << "Euclidean GCD: " << a << "," << b << std::endl;
    //Recursive
    auto start = std::chrono::steady_clock::now();
    int gcd = gcdRecursive(a,b);
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    std::cout << "Recursive Execution Time: " << std::chrono::duration <double, std::nano> (diff).count()  << " ns" << std::endl;
    //Iterative
    start = std::chrono::steady_clock::now();
    gcd = gcdIterative(a,b);
    end = std::chrono::steady_clock::now();
    diff = end - start;
    std::cout << "Iterative Execution Time: " << std::chrono::duration <double, std::nano> (diff).count()  << " ns" << std::endl;
    std::cout << "GCD: " << gcd << std::endl << "===================" << std::endl;
    return gcd;

}