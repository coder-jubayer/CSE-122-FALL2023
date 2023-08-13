#include <iostream>
using namespace std;
int main()
{
    int n,k,i,count=0;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>=ar[k-1] && ar[i]>0)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
