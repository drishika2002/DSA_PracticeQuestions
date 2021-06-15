#include<iostream>
using namespace std;

int longestSubarray(int a[], int n)
{
    int ans = 1, length = 1;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] < a[i+1])
        {
            length++;
        }
        else
        {
            if(ans < length)
            {
                ans = length;
            }
            length = 1;
        }
    }
    
    if(ans < length)
    {
        ans = length;
    }
    return ans;
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
    cout << "Length of the longest increasing contiguous sub-array: " << longestSubarray(a,n) << endl;
    return 0;
}
