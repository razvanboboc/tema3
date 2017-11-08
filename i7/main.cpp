#include <iostream>
using namespace std;
int n;
int main()
{
    do{
    cout << "Input an angle between 0 and 90: ";
    cin>>n;
    if(n>=0&&n<=90)
        break;
    else
        cout<<"The angle is not between 0 and 90"<<endl;
    }
    while(1);
}
