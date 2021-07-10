#include<bits/stdc++.h>
using namespace std;

int radixDec(int n,int r)
{
    int rem=0;//remainder
    int num=0;//Decimal to Number
    int len=to_string(n).length()-1;//length of number 
    int p=0;//power
    while(n>0 && p<=len)
    {
        rem=n%10;
        num=num+pow(r,p)*rem;
        n=n/10;
        ++p;
    }
    return num;
}

int main()
{

    int n,r;// n is digit and r is radix
    cin>>n;
    cin>>r;

    cout<<"Your number to Decimal: "<<radixDec(n,r);
    return 0;
}
