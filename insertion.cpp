#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        
        temp=a[i];
        for(j=i-1;j>=0 && temp<a[j];j--)
        
        {
            a[j+1]=a[j];
        }
         a[j+1]=temp;
    }
    
    
}
int main()
{
    int i,a[50],n;
     cout<<"enter no of element want to insert"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertion_sort(a,n);
    for (i=0;i<n;i++)
    {
        cout<<a[i]<<" \n";
    }
  

}
