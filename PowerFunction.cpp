#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 1 || a == 1)
    {
        return a;
    }
    if (b % 2 == 0)
    {
        return power(a, b / 2) * power(a, b / 2);
        // int temp = power(a, b / 2);
        // return temp * temp;
    }
    else
    {
        return power(a, b / 2) * power(a, b / 2) * a;
        // int temp = power(a, b / 2);
        // return temp * temp * a;
    }
}

int main()
{
    int a, b;
    cout << "Enter the number: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;
    cout << power(a, b);
}