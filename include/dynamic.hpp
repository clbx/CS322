#include <iostream>

class dynamic{
    public:
        int fibonacci(int);
        int coins(int*, int);
        int change(int*, int, int);
        int robot(int[5][5], int, int);
        int sequence(int*, int);
    private:
        int seqInternal(int*,int,int*);
};