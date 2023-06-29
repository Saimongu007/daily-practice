#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;

    int X = max(max(A,B),C);
    int Y = min(min(A,B),C);
    int Z = ((A+B+C) - (X+Y));
    cout<<Y <<" "<< Z <<" "<< X <<endl;
    return 0;
}
