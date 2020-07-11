#include <iostream>
using namespace std;

void merge(int A[], int B[], int C[], int m, int n){
    int i = 0, j = 0, s = 0;
    while(i < n && j < m){
        if(A[i] < B[j])
            C[s++] = A[i++];
        else
            C[s++] = B[j++];
    }
    
    //when one of them exhausts
    while(j < m)
        C[s++] = B[j++];    //when A exhausts
    while(i < n)
        C[s++] = A[i++];    //when B exhausts
}

int main() {
	// your code goes here
	int n, m;
	cin>>n>>m;
	int A[n], B[m], C[m+n];
	for(int i = 0; i < n; i++)
	    cin>>A[i];
	for(int i = 0; i < m; i++)
	    cin>>B[i];
	    
	merge(A, B, C, m, n);
	
	for(int i = 0; i < n+m; i++)
	    cout<<C[i]<<" ";
	
	return 0;
}
