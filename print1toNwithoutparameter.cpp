#include <iostream>
using namespace std;

int print(int n) // int funtion returns 0 or something
{                // void funtion doesnot require to return anything
    if (n == 0)
    {
        return 0;
    }
    print(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    print(n);
}