#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        for(int j=n-1;j<=0;j--)
        {
            int temp = a[n-1];
            if(j == 0)
            {
                a[j] = temp;
            }
            else
            {
                a[j] = a[j-1];
            }
        }
    }
    int m;
    for(int i=0;i<q;i++)
    {
        cin>>m;
        cout<<a[m]<<endl;
    }
    return 0;


    /*for to be get out of full rottions.
       k = k%n;
       now each element will shift at the end of all the rotation by
       n-k%10
       and then we will find the elment at index b..
       so in origannal array we can simply see that for finding element at b position after k rotation will be
       at position

       n-k+b%10 
       in actual array..
       
    */
    
}