#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution
{
public:
	vector<int> find_error_num(vector<int>& num)
	{
	   vector<int> result;
	   int len = num.size();
	   for (int i=0; i<len; i++)
	   {
	      int t =abs(num[i]) - 1;
	      if (num[t] > 0)
	      {
		 num[t] *= -1;
    	      }
	      else
	      {
		 result.push_back(num[i]);
	      }
	   }
	   for (int i =0; i<len; i++)
	   {
	     if (num[i] > 0)
	     {result.push_back(i+1);}
	   }
	   return result;
	}
};

int main()
{
  Solution s;
  vector<int> b;
  b.push_back(1);
  b.push_back(3);
  b.push_back(2);
  b.push_back(4);
  b.push_back(4);
  vector<int> results = s.find_error_num(b);
  for (int i=0; i<results.size(); i++)
  {
     cout<<results[i]<<endl;
  }
}
