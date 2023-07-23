#include<stdio.h>
int main()
{
    int odd;
    scanf("%d",&odd);

    for(int i=0;i<odd;i++)
    {
         if(i==(odd+1)/2-1)
        {
            for(int j=0;j<odd;j++)
            {
                printf("#");
            }
        }

        else
        {
         
        for(int j=0;j<odd;j++)
        {
            if(j==(odd+1)/2-1)
            {
                printf("#");
            }
            else 
            {
                printf("*");
            }
        }

        }
       
        printf("\n");
       
    }

    return 0;
}