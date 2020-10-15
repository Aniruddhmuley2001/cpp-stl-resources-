// converting 12 hours time hour format to 24 hours..
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class timecon{
    string s;
    public:
    timecon()
    {
        cin>>s;
    }
    void conversion()
    {
        string newf;
        int si = s.length();
        if(s[si-2]=='A')
        {
            string temp = s.substr(0,2);
            int t = stoi(temp);
            if(t == 12)
            {
                string x = "00";
                newf = x.append(s.substr(2,si-4));
            }
            else
            {
                newf = s.substr(0,si-2);
            }
        }
        else{
            string temp = s.substr(0,2);
            int t = stoi(temp);
            if (t == 12)
            {
                newf= s.substr(0,si-2);
            }
            else
            {
                t = t + 12;
                string x = to_string(t);
                newf = x.append(s.substr(2,si-4));
            }
        }
        cout<<newf;

    }

};
int main()
{
    timecon s1;
    s1.conversion();
    return 0;
}
