//bai3
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            int can = sqrt(i);
            if (can * can == i)
            {
                cout << i << " ";
            }
        }
    }
}
