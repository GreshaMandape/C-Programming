#include<stdio.h>
void BubbleSort(int N,int Arr[])
{
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                int temp=0;
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int N=0,i=0;
    printf("Enter size of the array:");
    scanf("%d",&N);
    int Arr[N];
    printf("Enter array elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&Arr[i]);
    }
    BubbleSort(N,Arr);
    printf("Sorted array elements are:");
    for(i=0;i<N;i++)
    {
        printf("%d ",Arr[i]);
    }
    return 0;
}