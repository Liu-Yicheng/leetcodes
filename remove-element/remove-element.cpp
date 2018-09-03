#include <iostream>
using namespace std;
#include <vector>
class solution
{
public:
	int remove_element(vector<int>& nums, int val)
	{
           int forward = 0, after = nums.size();
	   while(forward < after)
           {
              if (nums[forward] != val)
              {
                 forward += 1;
              }
              else
              {
                 swap(nums[forward], nums[--after]);
              }
           }
           return after;
        }
};
int main()
{
  solution s;
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(4);
  cout<< s.remove_element(v1, 2)<<endl;
}
