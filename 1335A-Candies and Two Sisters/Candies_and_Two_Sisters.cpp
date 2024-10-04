#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) 
    {
        long long int n;
        cin>>n;
        if(n<2) 
        {
            cout<<"0"<<endl;
        } 
        else 
        {
            cout<<(n-1)/2<<endl;
        }
    }
    return 0;
}
