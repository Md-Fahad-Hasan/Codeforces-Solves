#include <iostream>
using namespace std;
int main() 
{
    int n,b,d;
    cin>>n>>b>>d;
    
    int oranges[100000];
    for(int i=0;i<n;i++) 
    {
        cin>>oranges[i];
    }
    
    int Waste=0;
    int empty=0;
    
    for(int i=0;i<n;i++) 
    {
        if(oranges[i]<=b) 
        {
            Waste += oranges[i];
            if(Waste>d) 
            {
                empty++;
                Waste=0;
            }
        }
    }
    cout<<empty<<endl;
    
    return 0;
}
