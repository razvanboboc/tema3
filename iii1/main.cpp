#include <iostream>
using namespace std;
int v[100],y[100],z[100],i,j,n1,n2;
int main()
{
    cin>>n1;
    for(i=1;i<=n1;i++){
        cin>>v[i];
        z[i]=v[i];
    }
    cin>>n2;
    for(j=1;j<=n2;j++){
        cin>>y[j];
        n1++;
        z[n1]=y[j];
        }
    for(int k=1;k<=n1;k++)
      for(int l=k+1;l<=n1;l++)
        if(z[k]>z[l]){
            int t=z[k];
            z[k]=z[l];
            z[l]=t;
        }
    for(int l=1;l<=n1;l++)
        cout<<z[l]<<" ";
    return 0;
}
