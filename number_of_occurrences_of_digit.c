#include<stdio.h>
int main()
{
    int n,find,val,count;
    scanf("%d%d",&n,&find);
    count=0;
    while(n!=0)
    {
        val=n%10;
        if(val==find)
        {
            count++;
        }
        n=n/10;
        val=0;
        
    }
    printf("%d",count);
    
    
    
    
    
    
    
    
    
    
    return 0;
}