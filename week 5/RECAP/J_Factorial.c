#include<stdio.h>
long long int  fact(int n)
{
    if(n==0)
    {
        return 1;
    }
   
 long long int ans=fact(n-1);
  
return ans*n;

}
int main()
{
    long long int n,ans;
    scanf("%d",&n);
    ans=fact(n);
    printf("%lld",ans);

    return 0;
}