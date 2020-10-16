#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    int temp;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == -1)
        {
            continue;
        }
        else
        {
            temp = arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(arr[j] != -1)
                {
                   if(temp == arr[j])
                   {
                       count = count + 1;
                       arr[j] = -1;
                       arr[i] = -1;
                       temp = -1;
                   } 
                }
            }
        }
    }
    cout<<count;
    return 0;
}