#include<iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) 
    {
        long long int a,b,c,n;
        cin>>a>>b>>c>>n;
        long long int max_coin=a;
        if(b>max_coin) 
        {
            max_coin=b;
        }
        if(c>max_coin) 
        {
            max_coin=c;
        }
        long long int total_need=3*max_coin-(a+b+c);
        if(total_need <= n && (n-total_need)%3==0) 
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
