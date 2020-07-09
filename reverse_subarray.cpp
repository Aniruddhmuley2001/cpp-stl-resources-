#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q;
	cin>>N>>Q;
	vector<int> array(N);
	for(int i = 0; i < N; i++)
	    cin>>array[i];
	    
	while(Q--){
	    for(int i = 0; i < Q; i++){
	        int l, r;
	        cin>>l>>r;
	        l--; r--;     //To convert it to system of 0 index.
	        
	        for(int p1 = l, p2 = r; p1 < p2; p1++, p2--)
	            swap(array[p1], array[p2]);
	        
	        for(int i = 0; i < N; i++)
	            cout<<array[i]<<" ";
	        cout<<endl;
	    }
	}
	
	return 0;
}

//Time Complexity: Total = O(Q * N) or O(N)

//Sample input:
//5 3
//1 2 3 4 5
//1 5
//2 3
//3 5
