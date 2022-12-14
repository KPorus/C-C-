#include <iostream>
using namespace std;

int
main ()
{
  // your code goes here
  int t;
  cin >> t;
  int n;
  int c2;
  int ques;
  int count = 0;
  for (int i = 1; i <= t; i++)
    {
      cin >> n;
      for (int j = 1; j <= n; j++)
	{
	  cin >> ques;
	  if ((ques >1000) || (ques==1000))
	    {
	      count++;
	    }

	}
      if (count >=1)
	    {
	    cout << count << "\n";
	    count = 0;
    	}
    	else
    	{
    	    cout<< 0<<"\n";
    	}
    }

  return 0;
}
