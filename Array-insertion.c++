#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],size, position, num;
    cout<<"Enter size of array : "<<endl;
    cin>> size;

    cout<<"Enter element of array: "<<endl;
    for(int i = 0; i<size; i++)
    {
        cout<<"Enter element "<<i+1<<":";
        cin>> a[i];
    }
    cout<<"Enter new element to insert :";
    cin>> num;

    cout<<"Enter position to insert: ";
    cin>> position;

    while(position > position + 1 || position<= 0)
    {
        cout<<"Invalid position. Please enter position again : ";
        cin>> position;
    }

    for(int i = size - 1; i>= position -1; i--)
    {
        a[i + 1] = a[i];
    }
    a[position - 1] = num;
    size++;

    cout<<"New array: ";
    for(int i = 0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}