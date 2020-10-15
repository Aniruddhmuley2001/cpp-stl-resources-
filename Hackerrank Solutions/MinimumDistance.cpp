#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min = a[0];
    int max = a[n];
    for(int i=1;i<n;i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        if(max < a[i])
        {
            max = a[i];
        }

    }
    int temp = 0,temp_ans = 0;
    int min_distance = 1001; //because the length pf the array can be maximum 1000 and                                  in that case both elemnet can be max 1000 distance away                                  from each other and for intiallizing and work our for the                                first time we will take it to max value of n.
    for(int i=min;i<=max;i++)
    {
        int index1;
        temp = 0;
        int min_distance_temp = 0;
        for(int j=0;j<n;j++)
        {
            if(a[j] == i && temp == 0)
            {
                temp = 1;
                index1 = j;
            }
            else if(a[j] == i && temp == 1)
            {
                min_distance_temp = j - index1; 
            }     
        }
        if(min_distance_temp < min_distance && min_distance_temp != 0)
        {
            min_distance = min_distance_temp;
            temp_ans = 10;
        } 

    }
    if(temp_ans == 0)
    {
        min_distance = -1;
    }
    cout<<min_distance;
    return 0;
}
