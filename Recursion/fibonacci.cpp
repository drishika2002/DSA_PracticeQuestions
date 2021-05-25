// CPP program to Print Fibonacci Series using recursion

#include<iostream>
using namespace std;

int fibonacci(int N)
{
    if(N == 0)
    {
       return 0; 
    }
    
    if(N == 1 || N == 2)
    {
        return 1;
    }
    return (fibonacci(N-1) + fibonacci(N-2));
}

int main()
{
    int n;
    cin >> n;
  
    for(int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
