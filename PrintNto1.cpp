#include<iostream>
using namespace std;

void great(int n)
{
    if(n==0) return;
    cout<< n<< endl;
    cout<< "hey"<<endl;
    //n=n-1;
    great(n-1);
}

int main()
{
    great(5);
}