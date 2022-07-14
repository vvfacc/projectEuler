#include <iostream>
#include <vector>
using namespace std;

unsigned int collarTerm(unsigned long n){
    unsigned int term = 1;
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
            term += 1;

        } else {
            n = 3 * n + 1;
            term += 1;
        }
    }
    return term;

}

int main(){
    //vector<unsigned int> termVec;
    unsigned long i = 1;
    unsigned long rs;
    unsigned long maxl = 0;
    unsigned long term;
    while(i < 999999){
        //cout << maxl << " ";
        term = collarTerm(i);
        //cout << term << " ";
        //cout << max << " ";
        if(term > maxl){
            maxl = term;
            rs = i;
            //cout << max << " ";
        }
        i++;
    }
    cout << rs << " ";
    return 0;
}