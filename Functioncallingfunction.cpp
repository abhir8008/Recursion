#include<iostream>
using namespace std;

void great()
{
    cout<< "hey"<<endl;
    great();
}

int main()
{
    great();
}