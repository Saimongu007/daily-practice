#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i = a; i<=b; i++)
    {
        if(i>9 && i%2 == 0)
        {
            cout<<"even"<<endl;
        }
        else if(i>9 && i%2 != 0)
        {
            cout<<"odd"<<endl;
        }
        else if(i<=9 && i==1)
        {
            cout<<"one"<<endl;
        }
        else if(i<=9 && i==2)
        {
            cout<<"two"<<endl;
        }
        else if(i<=9 && i==3)
        {
            cout<<"three"<<endl;
        }
        else if(i<=9 && i==4)
        {
            cout<<"four"<<endl;
        }
        else if(i<=9 && i==5)
        {
            cout<<"five"<<endl;
        }
        else if(i<=9 && i==6)
        {
            cout<<"six"<<endl;
        }
        else if(i<=9 && i==7)
        {
            cout<<"seven"<<endl;
        }
        else if(i<=9 && i==8)
        {
            cout<<"eight"<<endl;
        }
        else if(i<=9 && i==9)
        {
            cout<<"nine"<<endl;
        }
    }
    return 0;
}

