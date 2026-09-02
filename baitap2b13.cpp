#include <iostream>
#include <math.h>
using namespace std;
bool lasochan(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool lasonguyento(int n)
{
    int count = 0;
    for (int j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool lanamnhuan(int nam)
{
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, nam;
    cout << "Hay nhap mot so n va mot nam bat ki: ";
    cin >> n >> nam;
    if (lasochan(n) == true)
    {
        cout << n << " la so chan!" << "\n";
    }
    else
    {
        cout << n << " khong phai la so chan!" << "\n";
    }
    if (n > 1)
    {
        if (lasonguyento(n) == true)
        {
            cout << n << " la so nguyen to!" << "\n";
        }
        else
        {
            cout << n << " khong phai la so nguyen to!" << "\n";
        }
    }
    else
    {
        cout << n << " khong phai la so nguyen to!" << "\n";
    }
    if (lanamnhuan(nam) == true)
    {
        cout << nam << " la nam nhuan!" << "\n";
    }
    else
    {
        cout << nam << " khong phai la nam nhuan!" << "\n";
    }
}
