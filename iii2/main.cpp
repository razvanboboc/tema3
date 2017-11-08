#include <iostream>
using namespace std;
int n,m,v[100];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        v[i]=i;
    while(n!=0){   //a)
    cin>>m;
    v[m]=0;
    for(int i=1;i<=n;i++)
        cout<<v[i];
    n--;
    }
    cin>>n;
    for(int i=1;i<=n;i++) //b)
        if(v[i]==0)
            m=i;
    int k=0;   //c)
    int j=0;
    for(int i=1;i<=n;i++)
        if(v[i]!=0){
            k++;
            j=i;
        }
    if(k==0)
        cout<<"The "<<j<<"th child won the game";
        return 0;
}
