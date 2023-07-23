#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    fgets(s,1001,stdin);
    int size=strlen(s);
  
    int ans=0;
    int Cap=0;
     int Sma=0; int Spa=0;
  
    for(int i=0;i<size;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            int val=s[i]-'A';
            
            Cap++;
        }
    }
    printf("Capital - %d\n",Cap);
     
     
    
    for(int i=0;i<size;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            int val=s[i]-'a';
           
            Sma++;

     

        }
    }
     printf("Small - %d\n",Sma);
      
    for(int i=0;i<size;i++)
    {
        if(s[i]==' ')
        {
            int val=s[i]-' ';
             
              Spa++;
        
        
      
        }
    }
      printf("Spaces - %d\n",Spa);



    return 0;
}