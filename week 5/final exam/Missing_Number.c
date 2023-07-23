#include<stdio.h>
int main()
{
    int T,a,b,c,s,d;
    scanf("%d",&T);
   

    for(int i=0;i<T;i++)
    {
        scanf("%d %d %d %d",&s,&a,&b,&c);
        d=s-(a+b+c);
        printf("%d\n",d);
    }

    return 0;
}