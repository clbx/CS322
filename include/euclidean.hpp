#include <iostream>
#include <vector>
#include <tuple>

class euclidean{
    public:

        int gcdRecursive(int a, int b);
        int gcdIterative(int a, int b);
        int gcdExtended(int a, int b, int* x, int* y); 
        void diophantine(int a, int b, int c, int *x, int *y);
};

