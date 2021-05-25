#include <bits/stdc++.h>
using namespace std;

void printNos(int N)
{
    if(N <= 0)
    {
        return;
    }
        
    printNos(N-1);
    cout << N << " ";
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int N;
        cin >> N;
        printNos(N);
        cout << "\n";
    }
    return 0;
}