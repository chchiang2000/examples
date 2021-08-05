#include<iostream>

using namespace std;

class Solution {
public:
    bool isThree(int n) {
    	int i = 1, j = 0;
    	int o = 0;
    	do {
    		o = n % i;
    		i++;

    		if(o == 0)
    			j++;

    	}
    	while (i <= n);

    	return j == 3;
    }
};

int main(){
	Solution s;

	cout << s.isThree(2) << endl;
	cout << s.isThree(4) << endl;
	cout << s.isThree(12) << endl;
}
