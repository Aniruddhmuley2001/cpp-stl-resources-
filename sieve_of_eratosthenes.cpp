#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);//we can do better and reduce the runtime a lot by adding two lines.
int main() {
	fast
	int N;
	cin >> N;
	vector<bool> is_prime(N+1, true);   //N+1 size to access is_prime[N]
	
	for(int i = 2; i*i <= N; i++){
	    if(is_prime[i]){
	        for(int j = i+i; j <= N; j+= i)
	            is_prime[j] = false;
	    }
	}
	
	for(int i = 2; i <= N; i++){
	    if(is_prime[i])
	        cout << i << " ";
	}
	
	return 0;
}
