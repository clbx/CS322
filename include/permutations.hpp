#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

#define LEFT true
#define RIGHT false

class permutations{
    public:
        std::vector<std::string> johnsontrotter(int);

    private:
        int findMobile(int*, bool*, int);
        int findLargestMobile(int*, int, int);

        

};