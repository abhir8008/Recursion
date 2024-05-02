#include<iostream>
using namespace std;

int power(int a,int b)
{
    if(b==1){return a;}
    if(b==0){return 1;}  // if(b==0){return b;}
    return a * power(a,b-1);
    //a= a * power(a,b-1);
    //return a;
}


int main()
{
    int a,b;
    cout<< "enter number: ";
    cin >> a;
    cout<< "enter number to power: ";
    cin>> b;
    cout<< a << " raised to power "<< b << " is: " << power(a,b);
    //a = power(a,b);
    //cout<< a;
}