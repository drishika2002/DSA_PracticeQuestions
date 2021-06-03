#include <iostream>
using namespace std;

void rev_array(int a[], int start, int n)
{
    if(start >= n)
        return;
    else
    {
        swap(a[start],a[n]);
        rev_array(a, start+1 , n-1);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    rev_array(a, 0 ,n-1);

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
