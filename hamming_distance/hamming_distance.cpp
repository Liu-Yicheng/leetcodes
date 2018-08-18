#include <iostream>
using namespace std;

class Solution
{
public:
	int hamming_dis(int a, int b)
	{	
		int count = 0;
		for (int c = a ^ b; c; c &= c-1)
		{
			++count;
		}
		return count;
	}
};
int main()
{
	Solution s;
	cout<< s.hamming_dis(1,2) <<endl;
	return 0;
}
