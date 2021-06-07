#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
	    if (arr[i] == key)
			return i;
	}
	return -1;
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
	
	int key;
	cin >> key;
	
	int index = search(arr, n, key);
	
	if (index == -1)
		cout << "Element is not present in the array";
	else
		cout << "Element found at index " << index;

	return 0;
}

