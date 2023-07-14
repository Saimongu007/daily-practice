#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    cin>>N;
    long long A[N];
    for(int i =0; i<N; i++)
    {
        cin>>A[i];
    }
    long long max = A[0];
    long long min = A[0];
    long long sum = 0;
    for(int i =0; i<N; i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
        if(A[i]<min)
        {
            min = A[i];
        }
        sum = sum + A[i];
    }
    cout<< min << " "<< max << " "<<sum <<endl;
    return 0;
}
