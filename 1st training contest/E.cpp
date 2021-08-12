#include <bits/stdc++.h>
using namespace std;

bool isAnagram (string s1, string s2){
	unordered_map<char, int> freq;
	if(s1.length() != s2.length()){
		return 0;
	}
	
	for (int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
    }
	
	for (int i = 0; i < s2.length(); i++) {
        if (freq.find(s2[i]) == freq.end()) {
            return 0;
        }
        else {
            freq[s2[i]]--;
            if (freq[s2[i]] == 0) {
                freq.erase(s2[i]);
            }
        }
    }
    return freq.size() == 0;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a, b;
    cin >> a >> b;
    
    if (isAnagram(a, b)) {
    	cout << 1;
    }
    else cout << 0;
	return 0;
}