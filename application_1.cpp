#include <bits/stdc++.h>

using namespace std;

void powerOfSTL()
{
    set< pair<int, int>> S;
    
    S.insert({401, 450});
    S.insert({10, 20});
    S.insert({2, 3});
    S.insert({30, 400});
    //Will get arranged as {2,3} , {10,20} , {30,400} , {401,450}
    //In such cases, arrangment is seen by first checking the first values of the pair(< or >), and if equal, then the second value.
    
    int point;
    cout<<"Enter the value of any number (value of point): ";
    cin>>point;
    cout<<"Example: 1(value less than the first interval), 11(value inside the range), 400(value at the end of range of a given pair), 401(value at the start of range of a given pair)"<<endl;
    auto it = S.upper_bound({point, INT_MAX});  //gives us the pair which comes after the pair in which the value exists  
    if(it == S.begin())
    {
        cout<<point<<" does not lie in any interval"<<endl;
        return;
    }
    it--;
    pair <int, int> current = *it;
    if(current.first <= point && point <= current.second)   //for {a, b}, current.first = a and current.second = b
        cout<<"Yes, "<<point<<" is present in "<<current.first<<" "<<current.second<<" interval"<<endl;
    else
        cout<<point<<" does not lie in any interval"<<endl;
        
    
}

int main() {
	// your code goes here
	powerOfSTL();	//Done in O(logN) time

	return 0;
}
