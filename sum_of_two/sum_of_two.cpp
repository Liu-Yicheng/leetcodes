#include <iostream>
using namespace std;
class Solution
{
public:
	/*
 	carry = a & b;-->carry表示a与b哪一位上都是1，这个位相加会产生进位
	a^=b;--> 运算结果后的a表示不进位的结果。^异或代表相加：1^0=0,1^1=0,0^0=0
	b = carry <<1;-->表是b是进位之后的结果
	例子：
	a=2-->a=0010;
	b=3-->b=0011;
	carry = a & b = 0010;
	a ^=b = 0001;
	b=carry<<1 = 0100;
	此时经过一轮循环，原来的a+b等于现在a+b=5，只是表达方式不一样啦，a代表不进位的部分，b代表进位的部分
	不断循环直到 两个数相加不进位了，此时a的值就是两个的和
  	*/
	int func(int a, int b)
	{	
		while(b)
		{	                         
		   int carry = a & b;
		   a ^= b;
		   b = carry <<1;
		}
		return a;

	}
};

int main()
{
	Solution s;
	cout<< s.func(2,3)<<endl;
	return 0;
}

