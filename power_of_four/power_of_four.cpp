#include <iostream>
using namespace std;
class Solution
{
public:
	/*
	func程序的内涵：
	(n & (n-1)) == 0代表的是n是否为2的次方，也就是说它的二进制表达式中是否只有1个1.
	(n & 0b01010101010101010101010101010101)==0 和  (n & (n-1)) == 0 两个条件一起说明：
	如果n的二进制只有一个1，而且是在4的次方对应位置上，则它就是4的次方 
	*/
	bool func(int n)
	{
		return (n>0) && ( n & (n-1))== 0 &&
		       ((n & 0b01010101010101010101010101010101) == n);
	}
	/*
 	func1程序内涵：
	n如果是4的次方，将它每次都除以4，并判断后面2两位是否为0了，
	如果不为0则退出看num是否为1，如果为1则就是4的次方，否则不是4的次方
 	*/
	bool func1(int n)
	{
		while(n>0 && !(n & 0b11))
		{
			n >>= 2;
		}
		return (n == 1);
	}
	
};

int main()
{
	Solution s;
	cout << s.func1(4) <<endl;
}

