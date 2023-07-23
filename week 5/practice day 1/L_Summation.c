#include<stdio.h>
void sum(long long int a[],long long int *ans,int i,long long int size)
{
    if(i==size)
    {
        return ;
    }
    *ans=*ans+a[i];
    sum(a,ans,i+1,size);


    
}
int main()
{
   long long  int n,s=0;
    scanf("%lld",&n);
   long long  int a[n];
    for(int i=0;i<n;i++) 
    {
        scanf("%lld",&a[i]);

    }
    sum(a,&s,0,n);

printf("%lld",s);

    return 0;
}