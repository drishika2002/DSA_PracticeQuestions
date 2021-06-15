#include<iostream>
using namespace std;

void printlongestSubarray(int a[], int n)
{
    int ans = 1, length = 1, index = 0;
    for(int i = 1; i < n-1; i++)
    {
        if(a[i] > a[i-1])
        {
            length++;
        }
        else
        {
            if(ans < length)
            {
                ans = length;
                index = i - ans;
            }
            length = 1;
        }
    }
    
    if(ans < length)
    {
        ans = length;
        index = n-ans; 
    }
    
    for(int i = index; i < index + ans; i++)
    {
        cout << a[i] << " ";
    }
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
    printlongestSubarray(a,n);
    return 0;
}
