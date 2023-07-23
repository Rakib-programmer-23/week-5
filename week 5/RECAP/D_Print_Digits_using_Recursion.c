#include<stdio.h>
void  digit(int x)
{
    if(x==0)
    {
        return ;
    }
      int l=x%10;
      digit(x/10);
      printf("%d ",l);


}
int main()
{
    int n,x;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        digit(x);
        if(x==0)
        {
            printf("0");
        }
        printf("\n");


    }


    return 0;
}