#include<stdio.h>
int main()
{
    int  t,T=1,flag=0;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        int s;
        scanf("%d",&s);
        int a[s];
      for(int i=0;i<s;i++)
      {
        scanf("%d",&a[i]);
      }
      int f;
      scanf("%d",&f);
     
    int flag=0;

     for(int i=0;i<s;i++)
      {

        if(a[i]==f)
        {
            printf("Case %d: %d\n",T,i+1);
           
            flag=1;
            break;
        } 

      }
      if (flag == 0)
        {
            printf("Case %d: Not Found\n", T);
        }

        T++;
    }

    return 0;
}








        
      
      
  
      
     
   
      
      
      
      

   