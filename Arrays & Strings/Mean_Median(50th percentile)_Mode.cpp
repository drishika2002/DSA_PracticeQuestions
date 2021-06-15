#include <iostream>
#include <algorithm>
using namespace std;

double mean(int a[], int n)
{
    double sum = 0; 
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum/n;
}

double median(int a[], int n)
{
    sort(a,a+n);
    if(n % 2 != 0)
    {
        return a[n/2];
    }
    return (a[n/2] + a[(n-1)/2])/2;
}

double mode(int a[], int n)
{
    sort(a,a+n);
    int len = 1, ans = 1, res = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1])
        {
            len++;
        }
        else
        {
            if(len > ans)
            {
                ans = len;
                res = a[i - 1];
            }
            len = 1;
        }
    }
    
    if(len > ans)
    {
        ans = len;
        res = a[n-1];
    }
    return res;
}

int main() 
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << "MEAN: " << mean(a,n) << endl;
    cout << "MEDIAN: " << median(a,n) << endl;
    cout << "MODE: " << mode(a,n) << endl;

    return 0;
}
