#include<iostream>
#include<string>

#define OFFSET_1 96
#define OFFSET_2 48

using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        string strNum = "";

        for (unsigned int i = 0; i < s.length(); i++) {
            s[i] = (int)s[i] - OFFSET_1;

            strNum += to_string(s[i]);
        }

        for (unsigned int i = 0; i < strNum.length(); i++) {
            strNum[i] = (int)strNum[i];
        }

        for (int i = k; i > 0; i--) {
        	sum = 0;

        	for (unsigned int j = 0; j < strNum.length(); j++) {
        		sum += stoi(to_string(strNum[j])) - OFFSET_2;
        	}

        	strNum = to_string(sum);
        }

        return sum;
    }
};

int main(){
	Solution s;

	cout << s.getLucky(std::string("iiii"), 1) << endl;
	cout << s.getLucky(std::string("leetcode"), 2) << endl;
	cout << s.getLucky(std::string("zbax"), 2) << endl;
}
