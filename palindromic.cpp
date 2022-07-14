// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

std::vector<int> numberExtractor(int N)
{
    vector<int> result;
    while (N != (N % 10))
    {
        int digit = N % 10;
        result.push_back(digit);
        N = int(N / 10);
    }
    result.push_back(N);

    return result;
}

bool palindromic(int N)
{
    vector<int> result = numberExtractor(N);

    int Rsize = result.size();
    if (Rsize % 2 == 0)
    {
        for (int i = 0; i < Rsize; i++)
        {
            if (result[i] != result[Rsize - i - 1])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        result.erase(result.begin() + int(result.size() / 2));
        int Lsize = result.size();
        for (int i = 0; i < Lsize; i++)
        {
            if (result[i] != result[Lsize - i - 1])
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    // vector<int> result = numberExtractor(12345);

    // for(int i : result){
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout << palindromic(9229);
    //  //cout << numberExtractor(12345)[1];
    vector<int> palind;
    for (int i = 999; i > 0; i--)
    {
        for (int j = 999; j > 0; j--)
        {
            if (palindromic(i * j))
            {
                // cout << i << " " << j << " " << i*j << endl;
                palind.push_back(i * j);
            }
        }
    }
    cout << *std::max_element(palind.begin(), palind.end());
    return 0;

    // return 0;
}