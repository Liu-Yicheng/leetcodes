#include <iostream>
using namespace std;
class solution
{
public:
    int binary_gap(int N)
    {
       int last = -1;
       int result = 0;
       for (int i=0; i<32; i++)
       {
	  if((N>>i) & 1)
	  {
	    if (last != -1)
	    {
               result = max(result, i-last);
	    }
	    last = i;
	  }
       }
       return result;
    }
};

int main()
{
  solution s;
  cout<< s.binary_gap(6)<<endl;
}
