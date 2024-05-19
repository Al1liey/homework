#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#define NUMBERS 10
void podsch(char* n);
int main(void)
{   char s[1000], c;
    int i=0;
    while( (c=getchar())!='\n' )
    s[i++]=c;
    s[i]='\0';
    podsch(s);
    return 0;
}
void podsch(char* n)
{
    int arr[NUMBERS]={0};
    int k = 0;
    int i = 0;
    do
    {
        k = n[i]-'0';
        arr[k]+=1;
        i++;
    }
    while(i<strlen(n));
    for(int i=0;i<NUMBERS;i++)
    {
        if (arr[i])
        {
            printf("%d %d\n", i, arr[i]);
        }
    }
}
