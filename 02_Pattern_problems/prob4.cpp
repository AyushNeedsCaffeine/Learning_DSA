#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number" << "\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {int k=1+i;
        
        for (int j = 0; j <= i; j++)
        {
            cout<<k;
        }
        cout << "\n";
        
    }

    return 0;
}