#include<stdio.h>
int main()
{
    int N=0,i=0,key=0;
    printf("Enter array size:");
    scanf("%d",&N);
    int arr[N];
    printf("Enter array elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key element:");
    scanf("%d",&key);
    for(i=0;i<N;i++)
    {
        if(arr[i]==key)
        {
        printf("Element found at %d position",i);
        return 0;
        }
    }
    printf("Element not found");
    return 0;
}