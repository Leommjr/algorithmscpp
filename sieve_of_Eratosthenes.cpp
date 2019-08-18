/**
 * @brief C++ Algorithms
 *  Algorithm called "sieve of Eratosthenes"
 *  
 * @author Leommjr  
 *
*/
#include <iostream>
#include <cmath>

#define N 1000

int main(){
    int inicial = std::floor(std::sqrt(N)), a[N], val = 2;
    for(int i = 0; i < N; i++)
        a[i] = val++;
    val = 2;
    while(val <= inicial){
        for(int j = 0; j < N; j++){
            if(a[j] != val && a[j]%val == 0)
                a[j] = 0;
        }
        val++;
    }
    for(int i = 0; i < N; i++){
        if(a[i] != 0){
            std::cout << a[i] << std::endl;
        }
    }
    return 0;
}
