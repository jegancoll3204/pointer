#include<stdio.h>
int minmax(int a[],int n,int *maximum);
int main()
{
    int a[90];
    int min,max,n,i;

    printf("\nHow much Size Do you want?:-");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("%d ).",i+1);
        scanf("%d",&a[i]);
    }
    min=minmax(a,n,&max);

    printf("\nMaximum Value  :%d",max);
    printf("\nMinimum Vaalue :%d",min);
    printf("\n\n");
}

int minmax(int a[],int n,int *maximum)
{
    int i,min,max;

    min=max=a[0];

    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    *maximum=max;
    return min;
    
}