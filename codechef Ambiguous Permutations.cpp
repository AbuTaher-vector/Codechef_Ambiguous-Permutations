
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
           int arr[n+1],flag=1;
           for(int i=1;i<=n;i++) cin>>arr[i];
           for(int i=1;i<=n;i++)
           {
               int x=arr[i];
               if(arr[x]!=i)
               {
                   flag=0;
                   break;
               }
           }
           if(flag==1) cout<<"ambiguous"<<endl;
           else if(flag==0) cout<<"not ambiguous"<<endl;
    }
}
