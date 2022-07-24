// Apni kaksha -- best
//Merge sort
#include <iostream>
using namespace std;

void merge(int arr[],int l,int mid, int r)
{
    int n1,n2,i=0,j=0;
    n1=mid-l+1;
    n2=r-mid;
    int a[n1],b[n2];
    for(i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int k=l;
    i=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;k++;
        }
        else
        {
            arr[k]=b[j];
            j++;k++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        j++;k++;
    }
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
}
int main()
{
    int n,i;
    cout<<"Enter n::";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1;
    mergesort(arr,l,r);
    cout<<"The sorted elements are::";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
