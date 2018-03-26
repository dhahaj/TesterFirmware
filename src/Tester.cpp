#include "tester.h"

namespace Tester
{

	void init()
	{
	  for (int i = 2; i != 7; i++) {
		pinMode(i, OUTPUT);
		if (i >= 13) break;
	  }
	  
	  pinMode(7, INPUT);
	  
	}

}
