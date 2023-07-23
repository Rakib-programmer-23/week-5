#include<stdio.h>
void love(int i,int *n)
{
    if(i==*n+1) 
    {
        return ;
    }
    printf("I love Recursion\n");
  
    love(i+1,n) ;
}
int main()
{
    int n;
    scanf("%d",&n);
    love(1,n);

    return 0;
}