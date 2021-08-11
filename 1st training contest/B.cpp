#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    
    vector<int> arr;
    int number;
    while(cin >> number)
	{
	    arr.push_back(number);
	}
    
    int count = 0;
    int maxres = 0;
    for (int i = 0; i < arr.size(); i++){
    	//cout << arr[i];
    	if (arr[i] == 0){
    		if (maxres < count) {
				maxres = count;
			}
			count = 0;
    		//cout << count << endl;
    	}
    	else {
    		count++;
    		//cout << count << endl;
    		}
    }  
 
	if (maxres < count) {
		maxres = count;
	}
	
    cout << maxres;
 
    return 0;
}