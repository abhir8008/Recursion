#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // n=n + sum(n-1);
    cout << n << endl;
    n = n + sum(n - 1);
    return n;
}

int main()
{
    int n;
    cout << " enter a number: ";
    cin >> n;
    cout << sum(n);
    // cout<< n;
    // 8:29:59
}