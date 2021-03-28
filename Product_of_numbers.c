#include<stdio.h>
int main()
{
    int n,prod=1,val;
    scanf("%d",&n);
    while(n!=0)
    {
        val=n%10;
        prod=prod*val;
        n=n/10;
    }
    printf("%d",prod);    
    
    
    
    
    
    
    
    
    
    
    return 0;
}