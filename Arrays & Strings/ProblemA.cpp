// Educational Codeforces Round 110 (Rated for Div. 2)

#include <iostream>
using namespace std;
 
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int players[4];
 
        for(int i = 0; i < 4; i++)
        {
            cin >> players[i];  // 3 7 9 5
        }
 
        int m1=0, m2=0;
        if(players[0] > players[1])
        {
            m1 = players[0];
            players[0] = 0;
        }
        else
        {
            m1 = players[1];
            players[1] = 0;
        }
 
 
        if(players[2] > players[3])
        {
            m2 = players[2];
            players[2] = 0;
        }
        else
        {
            m2 = players[3];
            players[3] = 0;
        }
 
 
        int flag1 = 0, flag2 = 0;
 
        if(players[0] < m2 && players[1] < m2)
            flag1 = 1;
 
        if(m1 > players[2] && m1 > players[3])
            flag2 = 1;
 
        if((flag1 == 1) && (flag2 == 1))
        {
            cout << "YES" << endl;
        }
        else
        {
          cout << "NO" << endl;
        }
    }
    return 0;
}
