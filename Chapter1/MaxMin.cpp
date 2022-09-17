#include <iostream>

using namespace std;

int main()
{

  int i, sum=0, max=0, min=0, input=0;

  for (i=0; i<2; i++)
    {
      cout << "Enter two positive values: ";
      cin >> input;

      if (i==0)
	{
	  min=input;
	  max=input;
	}

      else
	{
	  if (input<min)
	    min=input;

	  if (input>max)
	    max=input;
	}
      sum+=input;
    }

  cout << "The max: " << max << "\n";
  cout << "The min: " << min << "\n";
  cout << "The average:" << sum/2 << "\n";
}
