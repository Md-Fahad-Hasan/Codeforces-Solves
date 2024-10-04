#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++) 
    {
        int n;
        cin>>n;

        int odd=0;
        int even=0;
        for (int i=0;i<n;i++) 
        {
            int num;
            cin>>num;
            if(num%2==0) 
            {
                even=1;
            } 
            else 
            {
                odd=1;
            }
        }
        if(odd) 
        {
            if(even||(n%2 != 0)) 
            {
                cout<<"YES"<<endl;
            } 
            else 
            {
                cout<<"NO"<<endl;
            }
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
