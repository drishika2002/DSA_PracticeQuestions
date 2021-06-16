// Print the integers in array that fall between a range [a...b] (inclusive) in sorted order.

#include <iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int first_index = 0, last_index=n-1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == a)
        {
            first_index = i;
            break;
        }
    }

    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] == b)
        {
            last_index = i;
            break;
        }
    }

    for(int i = first_index; i <= last_index; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time Complexity: O(n)
