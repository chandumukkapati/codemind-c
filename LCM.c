#include<stdio.h>
int main()
{
    int m,n,max,lcm,i;
    scanf("%d%d",&m,&n);
    max=m>n?m:n;
    for(i=max;;i+=max)
    {
        if(i%m==0 && i%n==0)
        {
            lcm=i;
            break;
        }
    }
    printf("%d",lcm);
}