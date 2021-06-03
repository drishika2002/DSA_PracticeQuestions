// COMPARE IN PAIRS

#include <iostream>
using namespace std;

struct pairs
{
    int min;
    int max;
};

struct pairs getmm(int a[], int n)
{

};

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    getmm(a,n);

    return 0;
}
