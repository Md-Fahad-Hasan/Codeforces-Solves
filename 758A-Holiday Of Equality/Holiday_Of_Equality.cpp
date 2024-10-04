#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int welfare[100];
    for(int i=0;i<n;i++) 
    {
        cin>>welfare[i];
    }
    int max_welfare = welfare[0];
    for(int i=1;i<n;i++) 
    {
        if(welfare[i] > max_welfare) 
        {
            max_welfare = welfare[i];
        }
    }
    int total_cost = 0;
    for(int i=0;i<n;i++) 
    {
        total_cost += max_welfare - welfare[i];
    }
    cout<<total_cost<<endl;
    return 0;
}
