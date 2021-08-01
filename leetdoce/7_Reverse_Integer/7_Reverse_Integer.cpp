#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

class Solution {
public:
    int reverse(int x) {
    	/*
    	string s = to_string(x);
    	int integer = 0;

    	for (long unsigned int i = 0; i < s.length() / 2; i++)
    		swap(s[i], s[s.length() - i - 1]);

    	integer = stoi(s);

    	if (x < 0)
    		integer *= -1;

    	if (integer <= pow(2, 31) - 1 && integer >= pow(2, 31) * -1)
    	    return (int)integer;
    	else
    		return 0;
    	*/
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};

int main(){
	Solution s;

	cout << s.reverse(123) << endl;
	cout << s.reverse(-123) << endl;
	cout << s.reverse(120) << endl;
	cout << s.reverse(0) << endl;
	cout << s.reverse(1534236469) << endl;

	return 0;
}
