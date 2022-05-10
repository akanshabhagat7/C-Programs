// Input :   2 4
// Output : 16 (2*2*2*2)

#include<stdio.h>

int Power(int iNo1, int iNo2)  // 3  4
{
    int iMult=1,
    register int iCnt=0;
	
	//     1         2         3
	for(iCnt=1; iCnt<=iNo2; iCnt++)
	{
		iMult = iMult*iNo1; // 4
	}
	return iMult;
}

int main()
{
	auto int iValue1=0, iValue2=0;
	auto int iRet =0;
	
    printf("Enter base :  \n");
	scanf("%d",&iValue1);
	
	printf("Enter power : \n");
	scanf("%d",&iValue2);
	
	iRet=Power(iValue1,iValue2);   // Power(3,4)
	printf("Result is : %d\n",iRet);
	
    return 0;
}


//Time Complexity : N
// no2 mul (vrn)