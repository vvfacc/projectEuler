#include<iostream>
#include<vector>
#include <math.h>


using namespace std;

bool primeCheck(long N){
    for(int i = 2; i <= sqrt(N); i++){
        if(N %i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    // vector<long> prime;
    // int i = 1;
    // long start = 2;
    // while(i <= 10001){
    //     if(primeCheck(start)){
    //         prime.push_back(start);
    //         i+=1;
    //     }
    //     start += 1;
    // }

    // cout << prime[10000];
    // //cout << primeCheck(103);
    // return 0;


    unsigned long sum = 0;
    unsigned long prime_num = 2;
    while(prime_num < 2000000){
        if(primeCheck(prime_num)){
            sum += prime_num;
            
        }

        prime_num ++;
    }
    cout << sum;
    return 0;

}
