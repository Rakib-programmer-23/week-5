#include<stdio.h>

int main() {
    int n, sum1 = 0, sum2 = 0;
    scanf("%d",&n);

    int a[n][n];
    for(int i = 0; i <n; i++)
     {
        for(int j = 0; j <n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i <n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j)
             {
                sum1 = sum1 + a[i][j];
            }
            if(i + j == n - 1)
             {
                sum2 = sum2 + a[i][j];
            }
        }
    }
    int differ = (sum1 - sum2);
    if(differ<0)
    {
        differ=(-1)*differ;
        printf("%d",differ);
    }
    else{
        printf("%d",differ);
    }
   
  
    return 0;
}
