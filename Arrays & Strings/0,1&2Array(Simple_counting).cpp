#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
      cin >> arr[i];      // 1 0 1 2 1 0 1 2 2
    }

    int count[3]={0, 0, 0};

    for(int i=0;i<N;i++)
    {
        count[arr[i]]++;    // 2 4 3
    }

    for(int i=0;i<3;i++)       // count[0] count[1] & count[2]
    {
        for(int j=0;j<count[i];j++)
        {
            cout << i << " ";
        }
    }
    return 0;
}
