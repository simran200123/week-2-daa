#include <iostream>
using namespace std;
int  min(int a[],int k,int n)
{
    int loc=k,j,mini;
    mini=a[k];
    for(j=k+1;j<n;j++)
    {
        if(a[j]<mini)
        {
            mini=a[j];
            loc=j;
        }
    }
        return loc;
    
}
int main()
{
    int temp,a[50],n ,loc,k;
    cout<<"enter range"<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(k=0;k<n;k++)
    {
        cin>>a[k];
    }
    for(k=0;k<n;k++)
    {
        loc=min(a,k,n);
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
    for(k=0;k<n;k++)
    {
        cout<<a[k]<<" \n";
    }

}