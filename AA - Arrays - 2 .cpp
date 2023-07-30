#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int a[4*n-1];
    int k = (n*(n+1))/2;
    int sum = 0;
    for(int i =0; i<(4*n-1); i++)
    {
        cin>> a[ i];
        sum = sum + a[i];
    }
    cout<< (k*4)-sum << endl;
    return 0;
}
