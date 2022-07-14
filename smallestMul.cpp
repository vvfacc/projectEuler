#include<iostream>
#include<vector>
using namespace std;
int main(){
    //int N = 20;
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int64_t product = 1;
    for(int i:arr){
        product *= i;
    }
    cout << product / 2;
    return 0;
}