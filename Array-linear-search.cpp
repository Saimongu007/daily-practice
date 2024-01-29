#include<bits/stdc++.h>
using namespace std;

int linearsearch(int a[], int n, int target)
{
    for(int i = 0; i<n; i++)
    {
        if(a[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter array size :";
    cin>> n;

    int a[n];
    cout<<"Enter elements :"<<endl;
    for(int i = 0;i<n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>> a[i];
    }

    int target;
    cout<<"Enter target :";
    cin>> target;

    int ind = linearsearch(a,n,target);

    if(ind != -1)
    {
        cout<<"Found at index "<<ind <<endl;
    }

    else
    {
        cout<<"Not found"<<endl;
    }

    return 0;
}