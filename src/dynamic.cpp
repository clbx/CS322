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
        for(int j = 0; j < n && i >= coins[j]; j++){
            small = std::min(res[i-coins[j]], small);
        }
        res[i] = small+1;
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


int dynamic::sequence(int* arr, int n){
    int max = 1;
    seqInternal(arr,n,&max);
    return max;
}

int dynamic::seqInternal(int* arr, int n, int* max){
    if(n == 1){
        return 1;
    }

    int res = 1;
    int finalMax = 1;

    for(int i = 1; i < n; i++){
        res = seqInternal(arr,i,max);
        if(arr[i-1] < arr[n-1] && res + 1 > finalMax){
            finalMax = res + 1;
        }
    }
    if(*max < finalMax){
        *max = finalMax;
    }
    return finalMax;
}

