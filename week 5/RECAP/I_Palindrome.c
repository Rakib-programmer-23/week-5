#include <stdio.h>
#include <string.h>

void palin(char s[], int size)
{
    char reversed[1001];
    int j = 0;

    for (int i = size - 1; i >= 0; i--) {
        reversed[j] = s[i];
        j++;
    }

    reversed[j] = '\0';
    if(strcmp(reversed,s)==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }

}

int main()
{
    char s[1001];
    scanf("%s", s);

    int size = strlen(s);
    palin(s, size);
  

    return 0;
}
