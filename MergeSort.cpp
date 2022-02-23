class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)// m=mid
    {
         int i=l,j=m+1,k=l;
         int b[r+1];
         while(i<=m && j<=r)
         {
             if(arr[i]<arr[j])
             {
                 b[k]=arr[i];
                 k++;
                 i++;
             }
            else
            {
                b[k]=arr[j];
                k++;
                j++;
            }
         }
         if(i>m)
         {
             while(j<=r)
             {
                 b[k]=arr[j];
                 j++;
                 k++;
             }
         }
         else
         {
             while(i<=m)
             {
                 b[k]=arr[i];
                 i++;
                 k++;
             }
         }
         
         for(k=l;k<=r;k++)
         {
             arr[k]=b[k];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
       if(l<r)
       {
           int m=(l+r)/2;
           mergeSort(arr,l,m);
           mergeSort(arr,m+1,r);
           merge(arr,l,m,r);
       }
    }
};
