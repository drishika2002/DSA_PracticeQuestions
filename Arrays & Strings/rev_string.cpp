#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char>& s)
    {
        int n = s.size(), i = 0;
        while(i < n)
        {
            swap(s[i], s[n-1]);
            i++;
            n--;
        }
    }
};

int main()
{
    Solution Sol;
    char temp[100];
    int n;
    cin >> n;
    vector<char> s;
    for(int i = 0; i < n; i++)
    {
        cin >> temp[i];
        s.push_back(temp[i]);
    }

    Sol.reverseString(s);
    for(int i = 0; i < n; i++)
    {
        cout << s[i];
    }

    return 0;
}

