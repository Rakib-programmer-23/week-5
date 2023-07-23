#include<stdio.h>
int main()
{
    int n,x1,x2;
    scanf("%d",&n);
    int tiger=0;
    int pathan=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x1,&x2);
        if(x1>x2)
        {
            tiger++;
        }
        else
        {
            pathan++;
        }
        if(x1==x2)
        {
            if(tiger>pathan)
            {
                tiger--;
            }
            else
            {
                pathan--;
            }
        }
        
    }
    if(tiger==pathan)
    {
        printf("Draw");
    }
     

    if(tiger>pathan)
    {
        printf("Tiger");
    }

    else if(pathan>tiger)
    {
        printf("Pathan");
    }
   

    return 0;
}