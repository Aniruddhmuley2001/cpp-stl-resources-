//Rambo Numbers 
/*
Given three integers r,p, and q, Rambo numbers are the numbers that are divisible by r in the range 
[p, q]. Your task is to find the count of Rambo numbers provided the value of r,p, and q.

Input format
First-line contains integer T, denoting the number of test cases.Each test case, consists of 
3 integers r,p, and q.

Output format
For each test case on a new line, print the count of Rambo numbers.

Constraints:
1<=T<=10
1<=r<=10^18
-10^18<=p<=q<=10^18

*/

//prepbytes
//Ankit Surwade
//https://mycode.prepbytes.com/problems/maths/RMBNUM

#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
    long long r,p,q,i;
    long long x=0,y=0;
    cin>>r>>p>>q;
  
    long long new_p=p%r==0 ? p : p+((r-p%r)%r);
    long long new_q=q%r==0? q: q-((q%r+r)%r);
    //cout<<new_p<<" "<<new_q;
    cout<<(new_q - new_p)/r + 1<<endl;
}
    return 0;
}
