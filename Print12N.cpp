#include <iostream>
using namespace std;

void print(int x ,int n)
{
    if(x==n)
    {
        return;
    }
    cout<< x<<":"<<"hello"<<endl;
    print(x-1,n);
}


int main()
{
int x, n;

cout<<" enter value of x:"<<endl;
cin>> x;
cout<< "enter condition n (less than x)"<< endl;
cin>> n;

print(x,n);

}