#include<stdio.h>
#include<string.h>
int brace();
int brace1();
int j;
int l;
main()
{
    int i,len=0,n,k;
    char a[100];
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='}')
        {
            n=brace();
        }
        else if(a[i]=='{')
        {
            k=brace1();
        }
    }
    if(n==k)
    {
        printf("2");
    }
    else
    {
        printf("@");
    }
}
int brace()
{   
    j++;
    return j;
}
int brace1()
{
    l++;
    return l;
}
