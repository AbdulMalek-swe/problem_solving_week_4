#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, visit = 0,count1=0,visit1=0;
        string str;
        cin >> n >> str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {

                if (visit == 0)
                {
                    count++;
                    visit = 1;
                }
            }
            else
            {
                visit = 0;
            }
            if (str[i] == '0')
            {

                if (visit1 == 0)
                {
                    count1++;
                    visit1 = 1;
                }
            }
            else
            {
                visit1 = 0;
            }
        }
        cout << min(count1,count) << " ";
    }
    return 0;
}