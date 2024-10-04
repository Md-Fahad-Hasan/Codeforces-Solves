#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int height[n];
    for(int i=0;i<n;i++) 
    {
        cin>>height[i];
    }
    int max_index=0;
    int min_index=0;
    int max_height=height[0];
    int min_height=height[0];
    for(int i=0;i<n;i++) 
    {
        if(height[i]>max_height) 
        {
            max_height=height[i];
            max_index=i;
        }
    }
    for(int i=0;i<n;i++) 
    {
        if(height[i]<min_height) 
        {
            min_height=height[i];
            min_index=i;
        } 
        else if(height[i]==min_height) 
        {
            min_index=i;
        }
    }
    int max_swap=max_index;
    int min_swap=(n-1-min_index);
    if(max_index>min_index) 
    {
        min_swap--;
    }
    int total_swaps=max_swap+min_swap;
    cout<<total_swaps;

    return 0;
}
