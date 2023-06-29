#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B;
    cin>>A;
    cin>>B;
    if(A==1 && B==2)
    {
        cout<<"3"<<endl;
    }
    if(A==1 && B==3)
    {
        cout<<"2"<<endl;
    }
    if(A==2 && B==3)
    {
        cout<<"1"<<endl;
    }
    if(A==2 && B==1)
    {
        cout<<"3"<<endl;
    }
    if(A==3 && B==1)
    {
        cout<<"2"<<endl;
    }
    if(A==3 && B==2)
    {
        cout<<"1"<<endl;
    }
    return 0;
}
