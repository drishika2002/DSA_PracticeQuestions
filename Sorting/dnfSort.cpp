#include <iostream>
using namespace std;

void sortColors(int nums[], int n) 
{
    int low = 0, mid = 0, high = n-1;
    while(mid <= high)
    {
        if(nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            mid++; low++;
        }
            
        else if(nums[mid] == 1)
        {
            mid++;
        }
            
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
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
    
    sortColors(arr,n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
