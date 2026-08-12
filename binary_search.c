#include<stdio.h>
int BinarySearch(int N,int Arr[],int key)
{
    int l=0,r=N-1,mid=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(Arr[mid]==key)
        {
            return mid;
        }
        else if(Arr[mid]<key)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;
}
int main()
{
    int N=0,i=0,key=0;
    printf("Enter size of the array:");
    scanf("%d",&N);
    int Arr[N];
    printf("Enter the array elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&Arr[i]);
    }
    printf("Enter the key value:");
    scanf("%d",&key);
    int Ans=0;
    Ans=BinarySearch(N,Arr,key);
    if(Ans==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at %d position",Ans);
    }
    return 0;
}
