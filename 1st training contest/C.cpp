#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
    cin >> n;
    
    vector<int> arr;
    int number;
    
    for (size_t i = 0; i < n; ++i)
	{
		cin >> number;
		int prev;
		
		if (i == 0 || number != prev ) {
            
            cout << number << '\n';
        }
        
        prev = number;
        
	}  
 
    return 0;
}