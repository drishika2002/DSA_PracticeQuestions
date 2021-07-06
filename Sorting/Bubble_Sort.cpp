#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    BubbleSort(arr,n);
    return 0;
}


/*

Time Complexity: 
Best case: O(n)
Worst case: O(n ^ 2)

Space Complexity: O(1) [Inplace]
Stability: Yes

*/
