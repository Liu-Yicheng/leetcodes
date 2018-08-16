#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> result;
        for (int h = 0; h < 12; ++h) {
            for (int m = 0; m < 60; ++m) {
                if (bit_count(h) + bit_count(m) == num) {
                    const auto hour = to_string(h);
                    const auto minute = m < 10 ? "0" + to_string(m) : to_string(m);
                    result.emplace_back(hour + ":" + minute);
                }
            }
        }
        return result;
    }

private:
    int bit_count(int bits) {
        int count = 0;
        for (; bits; bits &= bits - 1) {
            ++count;
        }
        return count;
    }
};
int main()
{
	Solution s;
	vector<string> time = s.readBinaryWatch(2);
	for (int i=0; i<time.size(); ++i)
	{
		cout<< time.at(i) <<endl;
	}
}
