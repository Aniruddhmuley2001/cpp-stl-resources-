#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int bird_type[n];
    for(int i=0;i<n;i++)
    {
        cin>>bird_type[i];
    }
    int freq[5];
    for(int k=0;k<5;k++)
    {
        freq[k] = 0;
    }
    for(int i=0;i<n;i++)
    {
        if(bird_type[i] == 1)
        {
            freq[0] = freq[0] + 1;
        }
        else if(bird_type[i] == 2)
        {
            freq[1] = freq[1] + 1;
        }
        else if(bird_type[i] == 3)
        {
            freq[2] = freq[2] + 1;
        }
        else if(bird_type[i] == 4)
        {
            freq[3] = freq[3] + 1;
        }
        else
        {
            freq[4] = freq[4] + 1;
        }
    }
    int id = 1;
    int max_freq = freq[0];
    for(int j=1;j<5;j++)
    {
        if(max_freq<freq[j])
        {
            id = j + 1;
            max_freq = freq[j];
        }
    }
    cout<<id;
    return 0;
}