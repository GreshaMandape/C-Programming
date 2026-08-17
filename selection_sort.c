#include<stdio.h>
void SelectionSort(int N,int Arr[])
{
    int i=0,j=0;
    for(i=0;i<N-1;i++)
    {
        int minIndex=i;
        for(j=i+1;j<N;j++)
        {
            if(Arr[minIndex]>Arr[j])
            {
                minIndex=j;
            }
        }
        if(minIndex!=i)
        {
            int temp=0;
            temp=Arr[minIndex];
            Arr[minIndex]=Arr[i];
            Arr[i]=temp;

        }
    }
}
int main()
{
    int N=0,i=0;
    printf("Enter the size of array:");
    scanf("%d",&N);
    int Arr[N];
    printf("Enter array elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&Arr[i]);
    }
    SelectionSort(N,Arr);
    printf("Sorted elements are:");
    for(i=0;i<N;i++)
    {
        printf("%d\t",Arr[i]);
    }
    return 0;
}