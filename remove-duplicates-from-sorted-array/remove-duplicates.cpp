#include <iostream>
using namespace std;
#include <vector>
class solution
{
public:
      int remove_duplicates(vector<int> &nums)
      {
         int last = -1;
	 for (const auto& num : nums)
         {
            if ((last == -1)||(nums[last]!=num))
	    {
               nums[++last] = num;
            }
         }
	 return last+1;
      }
};

int main()
{
  solution s;
  vector<int> v1;
  v1.push_back(0);
  v1.push_back(1);
  v1.push_back(1);
  v1.push_back(2);
  cout<< s.remove_duplicates(v1)<< endl;
}
