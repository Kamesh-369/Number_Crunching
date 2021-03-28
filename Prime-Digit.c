#include<stdio.h>
int main()
{
    int n,val,prime,i;
    int flag=0;
    scanf("%d",&n);
    while(n!=0)
    {
        val=n%10;
        for(i=2;i<=val/2;i++)
        {
            if(val%i == 0)
            {
                flag=1;
                
            }
        }
        if(flag==0)
        {
            printf("%d ",val);
        }
        val=0;
        n=n/10;
        
    }
    return 0;
}