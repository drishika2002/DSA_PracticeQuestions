#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:	
	int isPlaindrome(string S)
	{
	    int i = 0, n = S.size(), flag = 1;
	    
	    while(i < n)
	    {
	        if(S[i] != S[n-1])
	        {
	            flag = 0;
	            break;
	        }
	        i++;
	        n--;
	    }
	    
	    if(flag == 0)
	    {
	        return 0;
	    }
	    else
	    {
	        return 1;
	    }
	    
	}

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
} 
