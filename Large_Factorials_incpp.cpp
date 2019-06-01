#include <iostream>

using namespace std;

void multi_huge(int *a, int &nx, int p)
{

    int carry = 0;
    int product;
    for(int i=0; i<nx; i++)
    {
        product = a[i]*p + carry ;
        a[i] = product % 10 ;
        carry = product / 10 ;
    }

    while(carry)
    {
        a[nx] = carry %10;
        carry = carry /10;
        nx++;
    }

}

void fact(int number)
{
    int a[10000]={0};

    int n = 1;
    a[0] = 1 ;
    for(int i=2; i<=number; i++)
    {
        multi_huge(a,n,i);
    }

    for(int i=n-1 ; i>=0 ;i--)
    {
    cout<<a[i];
    }
    cout<<endl;
}

int main()
{
    int num;
    cin>>num;
    fact(num);
    return 0;
}
