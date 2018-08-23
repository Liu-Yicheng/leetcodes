#include <iostream>
using namespace std;

class Solution
{
public:

      /*该方法的主要思想是利用末尾元素进行判断，流程是
        n % 2-->拿到末位的bit
        n /2 -->把位数往右移一位，原来倒数第二位的bit变成末位
	用同样的方法拿到右移一位后的末位，再和之前的末位进行判断
        如果一样直接退出，不一样重复2，3步，直到n变为0
         */
	bool biary_watch(int n)
	{
	   auto bool last_bit = n % 2;
	   n = n / 2;
	   while(n > 0)
	   {
	      if (last_bit == n % 2)
	       {
		  return false;
	       }
	      else
	       {
		  last_bit = n % 2;
                  n = n / 2;
               }
	   }
           return true;
	}
};
int main()
{
   Solution s;
   cout<< s.biary_watch(5) << endl;
}
