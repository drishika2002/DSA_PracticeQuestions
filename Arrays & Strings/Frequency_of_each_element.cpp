#include <bits/stdc++.h>
using namespace std;

void count_frequency(int a[], int n)
{
    bool check[n];
    for(int i = 0; i < n; i++)
    {
        check[i] = 0;
    }
    
    for(int i=0; i<n; i++)
    {
        if(check[i]== 1)
        {
            continue;
        }
        
        int count = 1;
        
        for(int j = i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                check[j] = 1;
                count++;
            }
        }
        
        cout<<"frequency of "<<a[i]<<" is: " << count << endl;
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
    count_frequency(a, n);
    return 0;
}

/*
OUTPUT: 
n = 10
1 2 3 3 2 1 1 1 6 7
frequency of 1 is: 4
frequency of 2 is: 2
frequency of 3 is: 2
frequency of 6 is: 1
frequency of 7 is: 1
*/
