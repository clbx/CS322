#include <vector>
#include <iostream>

#define LEFT true
#define RIGHT false

class permutations{
    public:
        std::vector<int> johnsontrotter(int);

    private:
        int findMobile();

        std::vector<int> perms;
        std::vector<bool> direction;

        


};