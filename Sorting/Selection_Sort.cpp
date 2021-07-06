#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int min = 0;
    for(int i = 0; i < n; i++)
    {
        min = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            swap(arr[min], arr[i]);
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
    
    SelectionSort(arr,n);
    return 0;
}


/*

* Find the minimum value in array
* Swap it with the value in the first position
* Repeat the steps above for the remaining array (starting at the second position and advancing each time)

Time Complexity: O(n ^ 2)

Space Complexity: O(1) [Inplace]
Stability: No
*/
