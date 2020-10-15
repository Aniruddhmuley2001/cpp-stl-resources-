#include <bits/stdc++.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int p;
    int q;
    cin>>p>>q;
    int temp = 0;
    for(int i=p;i<=q;i++)
    {
       if(i>=4)
       {
        long int x = i*i;
        string s1 = to_string(i);
        int d1 = s1.length();
        string s = to_string(x);
        int d = s.length();
        string num1 = s.substr(0,d/2);  //if output squre is of length 2*d1 - 1 but it                                             gives as the integer and the right hand part                                             we need total d1 length array so that become                                             in any case by d-d1..
        string num2 = s.substr(d-d1,d1);
        int n1 = stoi(num1);
        int n2 = stoi(num2);
        if(n1+n2 == i)
        {
            cout<<i<<" ";
            temp = 1;
        }
       }
       else if(i == 1)
       {
           cout<<i<<" ";
           temp = 1;
       }
       else
       {
           continue;
       }
    }
    if(temp == 0)
    {
        cout<<"INVALID RANGE";
    }
    return 0;
}
//abort called error on hackerrank 6th tastecase..




//second method code....

#include <bits/stdc++.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    int p;
    int q;
    cin>>p>>q;
    int temp = 0;
    for(int i=p;i<=q;i++)
    {
       if(i>=4)
       {
        long int x = (long)i*i;  //here (long)i*i is necessary becuse if you use (i*i) then it will give wrong answer for bigger values after a level..
        // string s1 = to_string(i);
        int d1 = 0;
        long int temp_num = i;
        while(temp_num > 0)
        {
            d1 = d1 + 1;
            temp_num = temp_num / 10;
        }
        // string s = to_string(x);
        int d = 0;
        temp_num = x;
        while(temp_num > 0)
        {
            d = d + 1;
            temp_num = temp_num / 10;
        }
        //string num1 = s.substr(0,d/2);  //if output squre is of length 2*d1 - 1 but it                                             gives as the integer and the right hand part                                             we need total d1 length array so that become                                             in any case by d-d1..
        //string num2 = s.substr(d-d1,d1);
        int p = pow(10,d1);   //pachal na jetla digit joye etla mode kariye etle mali jay
        int p1 = pow(10,d1);  //pachal siavy na digit divide karvathi mali jay so same                                   d1 power of 10 thi divide kariyu..
        int n1 = x%p;
        int n2 = x/p1;
        if(n1+n2 == i)
        {
            cout<<i<<" ";
            temp = 1;
        }
       }
       else if(i == 1)
       {
           cout<<i<<" ";
           temp = 1;
       }
       else
       {
           continue;
       }
    }
    if(temp == 0)
    {
        cout<<"INVALID RANGE";
    }
    return 0;
}
//abort called error on hackerrank 6th tastecase..