#include <iostream>
using namespace std;
class Solution
{
public:
	int func(unsigned n)
	{
		int count = 0;
		for (; n; n &= n-1)
		{
			count++;
			cout<<'c' <<count <<endl;
			cout<<'n'<< n <<endl;
		}
		return count;
	}
};

int main()
{
	Solution s;
	
	cout << s.func(6) <<endl;
	return 0;
}
