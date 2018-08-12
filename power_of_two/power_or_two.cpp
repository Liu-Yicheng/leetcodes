#include <iostream>
using namespace std;

class Solution
{
public:
	bool isPower(int n)
	{
		return n>0 && ((n & (n-1))==0);
	}
	
	bool isPower2(int n)
	{
		return n>0 && ((n&~(-n))==0);
	}

};

int main()
{
	Solution s;
	cout <<s.isPower2(2)<<endl;
}
