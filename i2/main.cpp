#include <iostream>
#include <stdio.h>
using namespace std;
int x,v[100];
int binarySearch(int v[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (v[mid] == x)  return mid;
        if (v[mid] > x) return binarySearch(v, l, mid-1, x);
        return binarySearch(v, mid+1, r, x);
   }
   return -1;
}
int main(){
    int n;
    cout<<"Search number: ";
    cin>>x;
    cout<<"In the array: ";
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cout<<binarySearch(v,0,n-1,x);
    return 0;

}
