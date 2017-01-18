#include<stdio.h>
#define MOD 1000000007
 int sum_of_divisors(int n)
{
    int ans=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            ans+=i;
        }
    }
    return ans;
}
int main()
{  
    int i,n,x,v,l,r,q,ty,a[1000005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    
    while(q--)
    { long long int ans=0;
        scanf("%d %d %d",&ty,&l,&r);
        
        if(ty==0)
        {
            for(i=l;i<=r;i++)
            {
                ans+=sum_of_divisors(a[i-1]);
            }
            if(ans>=MOD)
                ans%=MOD;
            printf("%lld\n",ans);
          
        }
        else
        {
        
            
            a[l-1]=r;
        }
    }
    return 0;
}
