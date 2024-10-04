#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int count1=0,count2=0;
        while(n%2==0) 
        {
            n/=2;
            count1++;
        }
        while(n%3==0) 
        {
            n/=3;
            count2++;
        }
        if(n!=1) 
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(count2>=count1) 
            {
                cout<<(count2-count1)+count2<<endl;
            } 
            else
            {
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}
