#include<cstdio>
#include<cstring>
using namespace std;
int a[1000005];
int bit[22];
bool ok(int x)
{
   int len=-1;
   while(x)
   {
       bit[++len]=x%10;
       x/=10;
   }
   for(int i=len/2;i>=0;--i)if(bit[i]!=bit[len-i])return 0;
   return 1;
}
int test(int l,int r)
{
   int ans=0;
   for(int i=l;i<=r;++i)if(ok(i))++ans;
   return ans;
}
int main()
{
   for(int i=1;i<=1000000;++i)
   {
       a[i]=a[i-1];
       if(ok(i))++a[i];
   }
   int l,r;
   while(~scanf("%d%d",&l,&r))
   {
       //printf("%d\n",test(l,r));
       printf("%d\n",a[r]-a[l-1]);
   }
   return 0;
}