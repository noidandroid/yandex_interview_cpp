#include <bits/stdc++.h>
using namespace std;

vector<char> arr;

void f(int cnt, int ind, int k){
	if (cnt <= k-ind-2){
		arr[ind] = '(';
		f(cnt+1, ind+1, k);
	}
	
	if (cnt > 0){
		arr[ind] = ')';
		f(cnt-1, ind+1, k);
	}
	
	if (ind == k){
		if (cnt == 0){
			for (auto i = 0; i < k; i++){
    			cout << arr[i];
	    	}
	    	cout << "\n";
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
    cin >> n;
    
    arr.resize(n * 2);
    
    f(0, 0, n*2);
    
    return 0;
}