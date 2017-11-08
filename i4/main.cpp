#include <iostream>
using namespace std;
int n,v[100],x,i,j,t,k;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(j=1;j<=n;j++)
      for(k=j+1;k<=n;k++)
        if(v[j]>v[k]){
            t=v[j];
            v[j]=v[k];
            v[k]=t;
        }
    for(int l=1;l<=n;l++)
        cout<<v[l]<<" ";
    return 0;
}
