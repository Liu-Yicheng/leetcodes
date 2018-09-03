#include <iostream>
#include <vector>
#include "math.h"
using namespace std;
class Solution
{
public:
	vector<int> fined_errornum(vector<int>& nums)
	{
	   int n = nums.size();
	   vector<int> ans;
	   for (int i = 0; i < n; i++)
	   {
              int t = abs(nums[i]) - 1;
	      if(nums[t] > 0)
	      {
		nums[t]*=-1;
	      }
	      else
	      {
		ans.push_back(t+1);
	      }
	   }
	   for(int i=0; i<n; i++)
	   {
	      if(nums[i]>0)
	      {
                 ans.push_back(i+1);
		 break;
	      }
	   }
	   return ans;
	}
};

int main()
{
   Solution s;
   int a[6] = {1,2,3,4,5,5};
   vector<int>b;
   b.push_back(1);
   b.push_back(3);
   b.push_back(5);
   b.push_back(5);
   b.push_back(2);
   b.push_back(4);
   vector<int> c = s.fined_errornum(b);
   for (int i = 0; i <c.size(); i++)
	cout<< c[i] <<endl;

}
