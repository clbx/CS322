#include "dynamic.hpp"

int dynamic::fibonacci(int n){
    if(n == 0){
        return 0;
    }
    int prevprev = 0;
    int prev = 1;
    int next;
    for(int i = 2; i < n; i++){
        next = prev + prevprev;
        prevprev = prev;
        prev = next;
    }
    return prev + prevprev;
}

int dynamic::coins(int* arr, int n){
    if(n < 0){
        std::cout << "No Coins" << std::endl;
        return 0;
    }    
    int* coins = new int[n+1];
    for(int i = 0; i < n; i++){
        coins[i+1] = arr[i];
    }

    int* res = new int[n+1];

    res[0] = 0;
    res[1] = coins[1];

    for(int i = 2; i <= n; i++){
        res[i] = std::max(coins[i] + res[i-2], res[i-1]);
    }
    return res[n];
}

int dynamic::change(int* coins, int n, int amt){
    int* res = new int[amt+1];
    res[0] = 0;
    for(int i = 0; i < n; i++){
        int small = INT_MAX;
        for(int j = coins[i]; j <= amt; j++){
            res[j] = res[j] + res[j - coins[i]];
        }
    }
    return res[amt];
}

int dynamic::robot(int board[5][5], int row, int col){
    int res[row][col];
    res[0][0] = board[0][0];
    for(int i  = 1; i < row; i++){
        res[0][i] = res[0][i-1] + board[0][i];
    }

    for(int i = 1; i < row; i++){
        res[i][0] = res[i-1][0] + board[i][0];
        for(int j = 1; j < col; j++){
            res[i][j] = std::max(res[i-1][j],res[i][j-1]) + board[i][j];
        }
    }

    return res[row-1][col-1];
}