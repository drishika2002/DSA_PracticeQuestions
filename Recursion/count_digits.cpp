// CPP Program to count the number of digits using recursion

#include<iostream>
using namespace std;

int count = 0;

int num_Of_digits(long long int num)
{
    if(num != 0)
    {
        count++;
        num_Of_digits(num/10);
    }
    return count;
}

int main()
{
    long long int n,res;
    cin >> n;

    res = num_Of_digits(n);
    cout << res << endl;
    return 0;
}

