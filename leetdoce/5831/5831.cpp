#include<iostream>
#include<vector>

using namespace std;

/*
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
*/

class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
    	return 0;
    }
};

int main(){
	Solution s;

	vector<int> milestones = {0};

	cout << s.numberOfWeeks(milestones = {1, 2, 3}) << endl;
	cout << s.numberOfWeeks(milestones = {5, 2, 1}) << endl;

	return 0;
}
