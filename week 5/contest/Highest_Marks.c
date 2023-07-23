#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }

    int highest=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>highest)
        {
            highest=a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        int diff=highest-a[i];
        printf("%d ",diff);
    }

    return 0;
}