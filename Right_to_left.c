#include<stdio.h>
int main()
{
    int n,val;
    scanf("%d",&n);
    
    while(n!=0)
    {
        val=n%10;
        printf("%d ",val);
        n=n/10;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}