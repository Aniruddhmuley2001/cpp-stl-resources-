#include <iostream>
#include <vector>       //Required for vector<int>
#include <algorithm>    //Required for sort()
#include <set>          //Required for set<int>
#include <map>          //Required for map<int, int>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);  //we can do better and reduce the runtime a lot by adding two lines.
using namespace std;

bool f(int x, int y)
{
    return x > y;    
}

void vectorDemo()
{
    cout<<"FUNCTIONALITIES IN A VECTOR INT"<<endl;
    int i = 0;
	vector<int> A =  {11, 2, 3, 14};
	cout<<A[3]<<" => Accesing the element"<<endl;                   //Accesing an element  of array
	
	//Sorting of Array
	sort(A.begin(), A.end());           //O(NlogN)
	cout<<"The sorted array is: ";
	while(A[i])
	{
	    cout<<A[i]<<" ";
	    i++;
	}
	cout<<endl;
	i = 0;
	
	//Binary search with time complexity of O(logN)
	bool present = binary_search(A.begin(), A.end(), 3);
	cout<<"Presence of 3 in array: "<<present<<endl;
	present = binary_search(A.begin(), A.end(), 4);
	cout<<"Presence of 4 in array: "<<present<<endl;
	cout<<"1 means present, 0 means absent"<<endl;
	
	//Appending value to array given
	A.push_back(100); A.push_back(100); A.push_back(100); A.push_back(100); A.push_back(123);
	cout<<"Result after appending values: ";
	for(int x: A)
	{
	    cout << x <<" ";
	}
	cout<<endl;
	
	//lower and upper bound use O(logN) time for sorted arrays
	vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); //Gives value >= the given number
	auto it2 = upper_bound(A.begin(), A.end(), 100); //Gives value > the given number
	cout<<"Value of lower bound: "<<*it<<endl;
	cout<<"Value of upper bound: "<<*it2<<endl;
	cout<<"Difference in the iterators: "<<it2 - it<<endl;
	
	//To check the order of sorting of array, by using comparator function f()
	//Here, f will be taken for implementing sorting in the decreasing order
	sort(A.begin(), A.end(), f);
	cout<<"Result after sorting: ";
	while(A[i])
	{
	    cout<<A[i]<<" ";
	    i++;
	}
	cout<<endl;
	i = 0;
	
	//To increase the value of every element of array by 1(as an example)
	for(int &x : A) //by reference
	    x++;
	cout<<"Resultant vector array after increasing the factor by 1: ";
	for(int x : A)
	    cout << x <<" ";
	cout<<endl;
	cout<<endl;
}

void setDemo(){
    cout<<"FUNCTIONALITIES IN A SET INT: O(logN) time complexity"<<endl;
    set<int> S;
    //Insertion of values
    S.insert(1); S.insert(2); S.insert(-1); S.insert(-10); 
    cout<<"Resultant array is: ";
    for(int x : S)
	    cout << x <<" ";
	cout<<endl;
	
	//Searching for a value
	auto it = S.find(-1);
	if(it == S.end())
	    cout<<"not present\n"<<endl;      //If the no. doesn't exist in array, we get iterator as S.end()
	else
	    cout<<"present: "<<*it<<endl;
	    
    //Upper and lower bound
    //Both are pre-defined functions, do not require S.begin() and S.end() parameters to be taken, as in vectorDemo examples
    auto it2 = S.upper_bound(-1);   //existing value
    auto it3 = S.upper_bound(0);    //non-existing value
    auto it4 = S.upper_bound(2);    //non-existing value
    cout<<"Upper bound of -1: "<<*it2<<endl;    //1(next greater value than given)
    cout<<"Upper bound of 0: "<<*it3<<endl;     //1(first greater value than given)
    cout<<"Upper bound of 2: "<<*it4<<endl;     //S.end() gets printed
    
    auto it5 = S.lower_bound(-1);   //existing value
    auto it6 = S.lower_bound(0);    //non-existing value
    auto it7 = S.lower_bound(-10);    //lowest value
    cout<<"Lower bound of -1: "<<*it5<<endl;    //-1(same value)
    cout<<"Lower bound of 0: "<<*it6<<endl;     //1(first greater value than given)
    cout<<"Lower bound of -10: "<<*it7<<endl;     //-10(same value)
    
    //Element erasure in O(logN) time
    S.erase(-1);
    cout<<"Array after erasure of -1: ";
    for(int x: S)
        cout << x << " ";
    cout<<endl;
    cout<<endl;
}

void mapDemo(){
    cout<<"FUNCTIONALITIES IN A MAP INT: O(logN) time complexity"<<endl;
    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[100000232] = 1;
    
    map<char, int> cnt;			//char(key), int(value)
    string x = "aniruddh muley";
    
    for(char c : x){
        cnt[c]++;
    }
    
    cout<<"Number of a's in the string: "<<cnt['a']<<endl;
    cout<<"Number of z's in the string: "<<cnt['z']<<endl;
}

int main() {
	// your code goes here
	vectorDemo();
	setDemo();
	mapDemo();
	
	return 0;
}
