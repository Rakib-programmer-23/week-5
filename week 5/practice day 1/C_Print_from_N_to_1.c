#include<stdio.h>
void work(int i)
{
    if(i==0) return ;
    printf("%d%s",i,i==1 ? "" :" ");
    work(i-1);

}

int main()
{
    int n;
    scanf("%d",&n);

    work(n);

    return 0;
}