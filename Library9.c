#include"Header9.h"

///////////////////////////////////////////////////////////
//
// Function Name: Addition
// Description:   Used to perform addition of 2 numbers
// Input:         Integer, Integer
// Output:        Integer
// Date:          12/04/2022
// Author:        Akansha Babasaheb Bhagat
//
//////////////////////////////////////////////////////////

int Addition(int iValue1, int iValue2)  
{
	int iAns = 0;
	
	if(iValue1 < 0)                    // Updator
	{
		iValue1 = -iValue1;
	}
	
	if(iValue2 < 0)
	{
		iValue2 = -iValue2;
	}
	
	iAns = iValue1 + iValue2;
	return iAns;
}