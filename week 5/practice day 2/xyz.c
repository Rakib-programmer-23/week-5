#include<stdio.h>
int main()
{
    int n,k,ans=0,ans1=0,ans2=0;
    scanf("%d %d",&n,&k);

    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if (k==n)
    {
         for(int i=0;i<n;i++)
    {
        ans=ans+a[i];
    }


    }
    else if(k<n)
    {
          for(int i=0;i<k;i++)
         {
         ans1=ans1+a[i];
        } 
        for(int i=n-1;i>=n-k;i--)
        {
            ans2=ans2+a[i];
        }
        if(ans1>ans2)
        {
            printf("%d",ans1);
        }
        else
        {
            printf("%d",ans2);
        }
    }

    printf("%d",ans);


    return 0;
}