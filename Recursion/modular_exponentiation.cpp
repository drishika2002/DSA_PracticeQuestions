// CPP Prorgam to calculate the value of (x^n) % M using recursion

#include <iostream>
using namespace std;

int Mod(int x, int n, int M)
{
    if(n == 0)
    {
        return 1;
    }
  
    else if(n % 2 == 0)
    {
        int y = Mod(x, n/2, M);
        return (y * y) % M;
    }
  
    else
    {
        return (Mod(x, n-1, M) * (x % M)) % M;
    }
}

int main()
{
    int x, n, M;
    cin >> x >> n >> M;
    cout << Mod(x, n, M) << endl;
    return 0;
}
