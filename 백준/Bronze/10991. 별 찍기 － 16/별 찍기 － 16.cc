#include<stdio.h>

void print(int a,int b)
{
    for(int i=a;i>=1;i--) printf(" ");
     printf("*");
    
    if(b!=1) 
    {
        for(int i=0;i<b-1;i++) printf(" *");   
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) print(n-i,i);
}